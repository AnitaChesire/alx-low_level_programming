#include "main.h"

/**
  * *_strncat - concetenates two strings
  * @src: source string
  * @dest: destination string
  * @n: no of bytes from source
  * Return: concetenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
