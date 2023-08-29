#include "lists.h"

/**
 * free_listint - Deallocates memory used by a linked list.
 * @head: The initial node of the list.
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

