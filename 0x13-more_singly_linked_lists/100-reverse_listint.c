#include "lists.h"

/**
 * reverse_listint - flips the order of a linked list.
 * @head: starting point of a list.
 *
 * Return: pointer to the new initial node.
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

