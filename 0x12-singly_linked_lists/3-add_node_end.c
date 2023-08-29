#include "lists.h"

/**
 * add_node_end -  a function to add a node to the end
 * of a list.
 *
 * @head: list_t pointer to the head of the list.
 * @str: the data to be added to the new node.
 *
 * Return: return address of the new element
 * or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp_h;
	unsigned int i, str_len;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	str_len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		str_len += 1;
	}

	new->str = strdup(str);
	new->len = str_len;
	new->next = NULL;
	temp_h = *head;

	if (temp_h == NULL)
	{
		*head = new;
	}
	else
	{

		while (temp_h->next != NULL)
		{
			temp_h = temp_h->next;
		}
		temp_h->next = new;
	}
	return (*head);
}

