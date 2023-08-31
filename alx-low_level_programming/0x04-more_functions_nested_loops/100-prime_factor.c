#include <stdio.h>
#include <math.h>

/**
  * main - entry point
  * Return: empty
*/

int main(void)
{
	long x, maxf;
	long y = 612852475143;
	double square = sqrt(y);

	for (x = 1; x <= square; x++)
	{
		if (y % x == 0)
		{
			maxf = y / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}

