#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  * @argc: count
  * @argv: arguements passed
  * Return: success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
