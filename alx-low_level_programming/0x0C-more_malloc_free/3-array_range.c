#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: minimum
  * @max: maximum
  * Return: the integer
  */

int *array_range(int min, int max)
{
	int *rng;
	int k = 0, l = 0;

	if (min > max)
		return (NULL);

	k = max - min;

	rng = malloc((sizeof(int) * k) + sizeof(int));

	if (rng == NULL)
		return (NULL);

	while (min <= max)
	{
		rng[l] = min;
		l++;
		min++;
	}

	return (rng);
}
