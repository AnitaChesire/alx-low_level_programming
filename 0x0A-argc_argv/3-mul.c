#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  * @argc: count
  * @argv: passed
  * Return: succcess
*/

int main(int argc, char *argv[])
{
	int i, j;
	
	if (argc == 3)
	{
		j = atoi(argv[1]);
		i = atoi(argv[2]);
		printf("%d \n", j * i);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
	return (0);
}
