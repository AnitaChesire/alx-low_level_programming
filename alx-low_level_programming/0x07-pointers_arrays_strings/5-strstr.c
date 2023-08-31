#include "main.h"
#include <stdio.h>

/**
  * _strstr - fi=unction to locate a substring
  * @haystack: destination
  * @needle: first occurance source
  * Return: the sucdstring or null if none
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
