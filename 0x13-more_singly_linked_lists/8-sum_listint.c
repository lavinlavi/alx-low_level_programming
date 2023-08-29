#include "lists.h"

/**
 * sum_listint - Calculates the total sum of the integers stored in the list.
 * @head: Starting node of the list.
 *
 * Return: Aggregate sum of all integer data within the list nodes.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

