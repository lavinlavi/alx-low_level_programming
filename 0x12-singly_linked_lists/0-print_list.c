#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * display_list - check the code for OpenAI students.
 * @h: name of the list
 * Return- the total number of nodes.
 */
size_t display_list(const node_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->data == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->length, h->data);
		}
		counter++;
		h = h->next_node;
	}
	return (counter);
}
