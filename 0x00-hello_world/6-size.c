#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %1d bytes(s)\n", sizeof(char));
	printf("Size of a int: %1d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %1d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %1d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %1d bytes(s)\n", sizeof(float));
	return (0);
}
