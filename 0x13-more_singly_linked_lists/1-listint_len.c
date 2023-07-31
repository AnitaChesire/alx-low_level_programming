#include "lists.h"

/**
  * listint_len - return the number of elements
  * @h: the list
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t num_of_el = 0;

	while (h)
	{
		num_of_el++;
		h = h->next;
	}
	return (num_of_el);
}
