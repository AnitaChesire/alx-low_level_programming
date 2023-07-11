#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - entry point
  * @s1: string 1
  * @s2: string 2
  * Return: the string NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	str = malloc((sizeof(char) * l) + 1);

	if (str == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			str[k] = s1[k];

		if (k >= i)
		{
			str[k] = s2[j];
			j++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
