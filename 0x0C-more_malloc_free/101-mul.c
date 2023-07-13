#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int len(char *str);
char *xarray(int size);
char *ite_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * len - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */

int len(char *str)
{
	int l = 0;

	while (*str)
		l++;

	return (l);
}

/**
 * _xarray - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *ction exits with a status of 98.
 * Return: A pointer to the array.
 */

char *xarray(int size)
{
	char *arr;
	int ind;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);

	for (ind = 0; ind < (size - 1); ind++)
		arr[ind] = 'x';

	arr[ind] = '\0';
	return (arr);
}

/**
 * ite_zeroes - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 * Return: A pointer to the next non-zero element.
 */

char *ite_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 * Return: The converted int.
 */

int get_digit(char c)
{
	int dig = c - '0';

	if (dig < 0 || dig > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (dig);
}

/**
 * get_prod - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 * Return: empty
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mul, num, tens = 0;

	mul = len(mult) - 1;
	mult += mul;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mul >= 0; mul--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int n, t = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		n = (*final_prod - '0') + (*next_prod - '0');
		n += t;
		*final_prod = (n % 10) + '0';
		t = n / 10;
		
		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		n = (*next_prod - '0');
		n += t;
		*final_prod = (n % 10) + '0';
		t = n / 10;

		final_prod--;
		next_prod--;
	}

	if (t)
		*final_prod = (t % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc:An array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, ind, dig, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = ite_zeroes(argv[1]);

	if (*(argv[2]) == '0')
		argv[2] = ite_zeroes(argv[2]);

	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = len(argv[1]) + len(argv[2]);
	final_prod = xarray(size + 1);
	next_prod = xarray(size + 1);
	
	for (ind = len(argv[2]) - 1; ind >= 0; ind--)
	{
		dig = get_digit(*(argv[2]) + ind);
		get_prod(next_prod, argv[1], dig, zeroes++);
		add_nums(final_prod, next_prod, size -1);
	}
	
	for (ind = 0; final_prod[ind]; ind++)
	{
		if (final_prod[ind] != 'x')
			putchar(final_prod[ind]);
	}

	putchar('\n');

	free(next_prod);
	free(final_prod);
	return (0);			
}
