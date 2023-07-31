#include "lists.h"

/**
  * print_listint - prints all the elements of a list
  * @h: the linked list
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t num_of_el = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_of_el++;
		h = h->next;
	}

	return (num_of_el);
}
