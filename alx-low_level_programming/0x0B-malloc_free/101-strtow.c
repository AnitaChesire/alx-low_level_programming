#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
  * word_len - entry
  * @str: string
  * Return: int
  */

int word_len(char *str)
{
	int ind = 0, len = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		len++;
		ind++;
	}

	return (len);
}

/**
  * count_words - entry
  * @str: string to be searched
  * Return: number of words
  */

int count_words(char *str)
{
	int ind = 0, words = 0, len = 0;

	for (ind = 0; *(str + ind); ind++)
		len++;

	for (ind = 0; ind < len; ind++)
	{
		if (*(str + ind) != ' ')
		{
			words++;
			ind += word_len(str + ind);
		}
	}

	return (words);
}


/**
  * strtow - Entry
  * @str: string
  * Return: success
  */

char **strtow(char *str)
{
	char **strings;
	int ind = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);

	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));

	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[ind] == ' ')
			ind++;

		letters = word_len(str + ind);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[ind++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
