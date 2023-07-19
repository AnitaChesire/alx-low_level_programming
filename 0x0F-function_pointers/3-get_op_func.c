#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result of a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: substract a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiply of a and b.
 * @a: an integer
 * @b: an integer
 * Return: The result a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the divide of a and b.
 * @a: an integer
 * @b: an integer
 * Return: divide a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns the module of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to module a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
