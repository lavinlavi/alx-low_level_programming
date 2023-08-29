#include "lists.h"

/**
 * listint_len - Calculates the total count of nodes in the linked list.
 * @h: The starting node of the list.
 *
 * Return: The quantity of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

