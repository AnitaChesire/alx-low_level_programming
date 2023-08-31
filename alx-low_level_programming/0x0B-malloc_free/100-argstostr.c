#include "main.h"
#include <stdlib.h>

/**
  * argstostr - Entry
  * @ac: one
  * @av: two
  * Return: char
  */

char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	str = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}

		str[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';
	return (str);
}
