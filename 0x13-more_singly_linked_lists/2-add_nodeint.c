#include "lists.h"

/**
  * add_nodeint - add a node at the begining
  * @head: pointer to the first element
  * @n: data to insert in the element
  * Return: address of new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc (sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
