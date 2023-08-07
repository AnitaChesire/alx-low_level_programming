#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read file print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual bytes read and printed
 *        0 function fails or file NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t d;
	ssize_t w;
	ssize_t t;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(d, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(d);
	return (w);
}
