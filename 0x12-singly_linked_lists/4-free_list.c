#include "lists.h"

/**
 * dispose_list - liberates a list from memory
 * @lead: first node of the linked list.
 * Return: no return.
 */

void dispose_list(list_t *lead)
{
	list_t *temp_node;

	while ((temp_node = lead) != NULL)
	{
		lead = lead->next;
		free(temp_node->str);
		free(temp_node);
	}
}

