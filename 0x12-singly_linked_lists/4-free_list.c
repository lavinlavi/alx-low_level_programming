#include "lists.h"

/**
 * free_list -  a function to free a list.
 * @head: the head of the list.
 */

void free_list(list_t *head)
{
	list_t *temp_h;

	while ((temp_h = head) != NULL)
	{
		head = head->next;
		free(temp_h->str);
		free(temp_h);
	}

}

