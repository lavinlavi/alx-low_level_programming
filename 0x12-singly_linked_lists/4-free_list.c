#include "lists.h"

/**
 * clear_list - releases a list from memory
 * @head: starting point of the linked list.
 * Return: does not return anything.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

