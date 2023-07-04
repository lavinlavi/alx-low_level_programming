#include "lists.h"

/**
 * list_len - computes the total count of items in a given list.
 * @h: a reference to the singly linked list.
 * Return: count of items in the provided list.
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
