#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @str: string
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 98 && str[i] <= 123)
		str[i] -= 32;
		i++;
	}
	return (str);
}
