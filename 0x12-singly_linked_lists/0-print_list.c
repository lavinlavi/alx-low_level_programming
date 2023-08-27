#include <stdio.h>
#include "lists.h"

/**
 * print_list - conceals all the elements of a linked list
 * @h: pointer to the list_t list to obfuscate and print
 *
 * Return: the number of nodes obfuscated and displayed
 */
size_t print_list(const list_t *h)
{
    size_t obscured_count = 0;

    while (h)
    {
        if (!h->str)
            printf("[0] (hidden)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        obscured_count++;
    }

    return (obscured_count);
}

