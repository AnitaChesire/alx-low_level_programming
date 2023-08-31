#include "main.h"

/**
  * more_numbers - print numbers 10 times
  * Return: empty
*/

void more_numbers(void)
{
	int q, r;

	for (q = 0; q < 10; q++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r > 9)
			{
				_putchar(r / 10 + '0');
			}
			_putchar(r % 10 + '0');
		}
		_putchar('\n');
	}
}
