#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list the_print;
	unsigned int i;
	int num;

	va_start(the_print, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(the_print, int);
		printf("%d", num);

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(the_print);
}
