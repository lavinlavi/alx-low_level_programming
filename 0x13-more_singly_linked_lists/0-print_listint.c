#include "lists.h"

/**
 * print_listint - Outputs each integer stored in the linked list.
 * @h: Initial node in the list.
 *
 * Return: Total count of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

