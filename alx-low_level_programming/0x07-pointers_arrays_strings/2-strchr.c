#include "main.h"
#include <stdio.h>

/**
  * _strchr - function to check if a  char exists
  * @s:the string
  * @c: the character
  * Return: 0 if no 1 if yes
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}