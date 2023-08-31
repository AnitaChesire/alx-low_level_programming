#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - sum of two matrices
  * @a: matrices
  * @size: diagonals
  * Return: empty
*/

void print_diagsums(int *a, int size)
{
	int i, n, sum = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum = sum + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum, sum2);
}
