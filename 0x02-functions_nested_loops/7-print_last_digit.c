#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @i: number passed into the function
  * Return: the last value of the number
*/

int print_last_digit(int i)
{
	int n = i % 10;

	if (n < 0)
	{
		_putchar(-n + 48);
		return  (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
