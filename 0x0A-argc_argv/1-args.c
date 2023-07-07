#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - entry point
  * @argc: count
  * @argv: string of arguement
  * Return: success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
