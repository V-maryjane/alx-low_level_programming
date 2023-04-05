#include "lists.h"
#include <stdio.h>

/**
 *listint_len - function that retern the elements in a linked listint_t list
 *@h: points to the head of the list
 *Return:the number od nodes in the list
 */

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
	{
nodes++;
h = h->next;
	}
return (nodes);
}

