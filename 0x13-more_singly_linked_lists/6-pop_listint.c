#include "lists.h"

/**
 * pop_listint - eliminates the initial node of
 * a linked list
 * @head: starting node of the list.
 *
 * Return: data of the head node.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}

