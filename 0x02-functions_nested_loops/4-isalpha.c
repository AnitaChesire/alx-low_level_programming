#include "main.h"

/**
  * _isalpha - checks if the input is an alphabet
  * @c: an ASCII character
  * Return: 1 if c is a letter lower or uppercase 0 if not
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
