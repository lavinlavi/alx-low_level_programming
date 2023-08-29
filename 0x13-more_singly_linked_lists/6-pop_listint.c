#include "lists.h"

/**
 * pop_listint - Removes the first node from the list and returns its data.
 * @head: Pointer to the head node pointer.
 *
 * Return: The data contained in the removed node.
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

