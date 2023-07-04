#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the nth node from a linked list
 * @head: starting node of the list.
 * @index: position of the desired node.
 *
 * Return: nth node. If such node is absent, returns NULL.
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

