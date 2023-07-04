#include "lists.h"

/**
 * listint_len - computes the total count of elements within
 * a linked list.
 * @h: initial node of the list.
 *
 * Return: count of nodes.
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

