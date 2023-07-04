#ifndef NODES_H
#define NODES_H

/**
 * struct node_s - singly linked list
 * @data: string - (dynamically allocated string)
 * @length: length of the string
 * @next_node: points to the next node
 *
 * Description: singly linked list node structure
 * for Singly linked list project
 */
typedef struct node_s
{
	char *data;
	unsigned int length;
	struct node_s *next_node;
} node_t;

size_t display_list(const node_t *h);
size_t get_list_length(const node_t *h);
node_t *insert_node(node_t **head, const char *data);
node_t *insert_node_end(node_t **head, const char *data);
void clear_list(node_t *head);

#endif
