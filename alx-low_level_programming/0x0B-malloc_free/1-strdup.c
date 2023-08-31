#include "main.h"
#include <stdlib.h>

/**
  * _strdup - entry point
  * @str: string
  * Return: pointer to the string
*/

char *_strdup(char *str)
{
	char *pnt;
	int a = 0, i = 1;

	if (str == 0)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	pnt = malloc((sizeof(char) * i) + 1);

	if (pnt == NULL)
		return (NULL);

	while (a < i)
	{
		pnt[a] = str[a];
		a++;
	}
	pnt[a] = '\0';
	return (pnt);
}
