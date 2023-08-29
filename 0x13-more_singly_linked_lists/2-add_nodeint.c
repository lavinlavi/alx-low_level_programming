#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the start of the list.
 * @head: Reference to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: Pointer to the newly created node, or NULL if the operation fails.
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

