#include "lists.h"

/**
 * print_listint - display all items of a list.
 * @h: the starting point of a list.
 *
 * Return: total count of nodes.
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

