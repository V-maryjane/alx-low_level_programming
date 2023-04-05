#include "lists.h"
#include <stdio.h>

/**
 *print_listint - print all element of listint_t list.
 *@h: pointerr to the header of the list.
 *
 *Return: the number of of head list
 */

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d/n", h->n);
h = h->next;
}
return (nodes);
}
