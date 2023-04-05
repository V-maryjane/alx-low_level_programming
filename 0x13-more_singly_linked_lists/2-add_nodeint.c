#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL) /* Check if memory allocation failed */
return (NULL);

new_node->n = n; /* Set value for new node */
new_node->next = *head; /* Set next of new node as current head */

*head = new_node; /* Update head to point to the new node */

return (new_node); /* Return address of new node */
}
