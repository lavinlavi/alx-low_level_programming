#include "lists.h"

/**
 * add_node - a function to a add a new node at the
 * beginning of a list
 *
 * @head: pointer to the head of the list.
 * @str: the string to be stored in the new node.
 *
 * Return: returns the address of the new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, str_len;

	str_len = 0;
	if (*str)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			str_len += 1;
		}
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = *head;
	new->len = str_len;
	*head = new;

	return (*head);

}

