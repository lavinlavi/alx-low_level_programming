#include "lists.h"

/**
 * sum_listint - calculates the total of all the data (n) within
 * a linked list.
 * @head: initial node of the list.
 *
 * Return: total of all the data (n).
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

