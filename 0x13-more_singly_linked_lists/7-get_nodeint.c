#include "lists.h"

/**
 * get_nodeint_at_index - Fetches the node
 * located at a specific index in the list.
 * @head: Initial node of the list.
 * @index: Position of the node to be retrieved.
 *
 * Return: Node at the specified index, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

