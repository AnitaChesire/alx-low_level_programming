#include "main.h"
#include <stdio.h>

int comp(char *s, int f, int l);
int str_len(char *s);

/**
  * is_palindrome - check if string is a palondrome
  * @s: string passed
  * Return: 0 if not  1 if is
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, str_len(s) - 1));
}

/**
  * str_len - checks sting length
  * @s: the string
  * Return: the length
*/

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_len(s + 1));
}

/**
  * comp - compare string characters
  * @s: the string
  * @f: first character
  * @l: last character
  * Return: comparison
*/

int comp(char *s, int f, int l)
{
	if (*(s + f) == *(s + l))
	{
		if (f == l || f == l + 1)
			return (1);
		return (0 + comp(s, f + 1, l - 1));
	}
	return (0);
}
