#include "lists.h"

/**
 * free_listint2 - Releases memory allocated
 * to a linked list and sets head to NULL.
 * @head: Pointer to the head node pointer.
 *
 * Return: None.
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

