#include "lists.h"

/**
 * add_nodeint_end - Appends a new node at the tail of the list.
 * @head: Pointer to the head node of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: Pointer to the head node, or NULL if the operation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}

