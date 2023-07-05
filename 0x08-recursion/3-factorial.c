#include "main.h"

/**
  * factorial - find the factorial of a number
  * @n: inteher passed to get factorial
  * Return: the factorial
*/

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
