#include "lists.h"

/**
 * reverse_listint - Inverts the order of nodes in the list.
 * @head: Pointer to the head node pointer.
 *
 * Return: Pointer to the new head node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}

