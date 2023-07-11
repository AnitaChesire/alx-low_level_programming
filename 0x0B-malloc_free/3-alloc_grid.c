#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - llocate memory
  * @width: width
  * @height: rows
  * Return: pointer to a pointer 0 or 1 failure
*/

int **alloc_grid(int width, int height)
{
	int  **pp;
	int i, j, k, l;

	if (width == 0 || height == 0)
		return (NULL);

	pp = malloc(sizeof(int *) * height);

	if (pp == NULL)
	{
		free(pp);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pp[i] = malloc(sizeof(int) * width);

		if (pp[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(pp[j]);
			}

			free(pp);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			pp[k][l] = 0;
		}
	}
	return (pp);
}
