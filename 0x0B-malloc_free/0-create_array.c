#include "main.h"
#include <stdlib.h>

/**
  * create_array -entry point
  * @size: size of elements
  * @c: element to initialize
  * Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *pnt_arr;
	unsigned int i;

	pnt_arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (pnt_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		pnt_arr[i] = c;
	}
	return (pnt_arr);
}
