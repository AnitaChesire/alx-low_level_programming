#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_numbers;
	int i;
	int the_sum;

	if (n == 0)
		return (0);

	va_start(my_numbers, n);

	for (i = 0; i < n; i++)
		the_sum += va_arg(my_numbers, int);

	va_end(my_numbers);
	return (the_sum);
}
