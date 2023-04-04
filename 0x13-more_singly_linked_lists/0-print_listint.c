#include "lists.h"

/**
 *print_listint - print all element of listint_t list.
 *@h: pointerr to the header of the list.
 *
 *Return: the number of of head list
 */
size_t print_listint(const listint_t *h)
{
        size_t count = 0;
        while (h ! = Null)

        {
                printf("%d/n", h->n);
                h = h->next;
                count++
        }

         return (count);

}
