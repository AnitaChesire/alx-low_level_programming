#include "main.h"

/**
  * _isupper - checks if letter is upper or lower
  * @c: letter passed to be checked
  * Return: 1 if upper otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
