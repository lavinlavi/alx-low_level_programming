#include "lists.h"

/**
 * free_listint2 - deallocates a linked list from memory
 * @head: starting node of the list.
 *
 * Return: function is void, no return value.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

