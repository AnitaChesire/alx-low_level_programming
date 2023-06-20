#include "main.h"
/**
  * _islower - checks if the character is a lower case
  * Return: 1 if its a lower case and 0 if not
  * @c: an ASCII character
*/
int _islower(int c)
{
	if (c >= 97 &&  c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
