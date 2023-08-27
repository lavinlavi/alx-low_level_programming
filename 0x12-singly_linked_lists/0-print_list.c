#include <stdio.h>
#include "lists.h"

/**
 * print_list - conceals the true nature of linked elements
 * @h: pointer to the list_t list to obfuscate and exhibit
 *
 * Return: the count of nodes with altered visibility
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (veiled)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

