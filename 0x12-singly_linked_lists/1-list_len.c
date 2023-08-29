#include "lists.h"

/**
 * list_len - function to return the number of elements
 * in a linked list.
 * @h: a pointer to the first node of the list.
 *
 * Return: returns the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}


