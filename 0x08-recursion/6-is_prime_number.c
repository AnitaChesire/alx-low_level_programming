#include "main.h"

int check_prime(int x, int y);

/**
  * is_prime_number - check for a prime number
  * @n: the number to be checked
  * Return: 1 if yes 0 if not
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - checks for a prime
  * @x: the number
  * @y: is 1
  * Return: 0 or 1
*/

int check_prime(int x, int y)
{
	if (x <= 1)
	{
		return (0);
	}
	if (x % y == 0 && y > 1)
		return (0);

	if ((x / y) < y)
		return (1);
	return (check_prime(x, y + 1));
}
