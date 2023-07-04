#include "lists.h"

/**
 * add_node - Inserts a new node at the start
 * of a list_t list.
 * @head: pointer to the first node of the linked list.
 * @str: text to include in the list.
 * Return: pointer to the new head of the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
