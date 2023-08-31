#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers
  * @n: passed into the function
  * Return: empty output
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
