#include "main.h"

/**
  * _strlen - calculate the length of a string
  * @s: the character
  * Return: the length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
