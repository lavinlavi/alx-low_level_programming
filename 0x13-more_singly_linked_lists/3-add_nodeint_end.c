#include "lists.h"

/**
 * add_nodeint_end - append a fresh node at the tail
 * of the linked list
 * @head: start node of the list.
 * @n: integer value for the node.
 *
 * Return: location of the appended node. If operation fails, returns NULL.
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

