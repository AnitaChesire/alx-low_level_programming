#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: the number
  * Return: 1 if greater than 0, 0 if its 0 and -1 if its less then 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
