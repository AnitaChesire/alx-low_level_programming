#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	int r;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
	}
	for (r = 97; r <= 102; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
