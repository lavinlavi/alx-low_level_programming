#include "lists.h"

/**
 * free_listint - liberates a linked list from memory
 * @head: initial node of the list.
 *
 * Return: void function, no return.
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

