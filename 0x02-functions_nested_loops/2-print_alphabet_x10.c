#include "main.h"

/**
  * print_alphabet_x10 - prints the alpabet in lower case 10 times followed by a new line
  * Return - Always 0 (success )
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
