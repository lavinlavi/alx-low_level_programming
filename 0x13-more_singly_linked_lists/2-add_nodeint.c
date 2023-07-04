#include "lists.h"

/**
 * add_nodeint - includes a fresh node at the list's outset
 * @head: initial node of the list.
 * @n: integer element.
 *
 * Return: address of the newly added element, or NULL if operation unsuccessful.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

