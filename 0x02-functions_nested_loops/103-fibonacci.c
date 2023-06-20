#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fibosum;
	float tot_sum;

	while (1)
	{
		fibosum = fibo1 + fibo2;
		if (fibosum > 4000000)
			break;

		if ((fibosum % 2) == 0)
			tot_sum += fibosum;

		fibo1 = fibo2;
		fibo2 = fibosum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
