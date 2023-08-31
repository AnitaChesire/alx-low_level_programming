#include "main.h"
#include <stdio.h>

int _sqrt(int x, int y);

/**
  * _sqrt_recursion - find the squareroot of a number
  * @n: the number
  * Return: the square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - find the squareroot of a number
  * @x: the number
  * @y: the iterate number
  * Return: the square root
*/

int _sqrt(int x, int y)
{
	int sqrt = y * y;

	if (sqrt > x)
	{
		return (-1);
	}
	if (sqrt == x)
	{
		return (y);
	}
	return (_sqrt(x, y + 1));
}
