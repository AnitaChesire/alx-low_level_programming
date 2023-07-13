#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - entry
  * @nmemb: number of elements
  * @size: the size
  * Return: always void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int l = 0, k = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;

	arr = malloc(l);

	if (arr == NULL)
		return (NULL);

	while (k < l)
	{
		arr[k] = 0;
		k++;
	}
	return (arr);
}
