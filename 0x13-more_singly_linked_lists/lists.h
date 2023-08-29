#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Structure for single-linked list of integers
 * @n: The integer contained in the node
 * @next: Reference to the subsequent node
 *
 * Overview: A node structure to implement singly linked list of integers
 * for Alx project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s - Structure for single-linked list of pointers
 * @p: The pointer stored within the node
 * @next: Reference to the next node in the list
 *
 * Overview: A node structure for a singly linked list that holds pointers
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

#endif

