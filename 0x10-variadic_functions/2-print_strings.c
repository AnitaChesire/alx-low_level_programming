#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_the_string;
	unsigned int i = 0;
	char *s;

	va_start(print_the_string, n);

	for (; i < n; i++)
	{
		s = va_arg(print_the_string, char *);

		if (s == NULL)
			printf("(nill)");
		else
			printf("%s", s);

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_the_string);
}
