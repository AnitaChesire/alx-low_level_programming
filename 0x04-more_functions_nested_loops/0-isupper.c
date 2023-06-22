#include "main.h"

/**
  * _isupper - checks if letter is upper or lower
  * @c: letter passed to be checked
  * Return: 1 if upper otherwise 0
*/

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
