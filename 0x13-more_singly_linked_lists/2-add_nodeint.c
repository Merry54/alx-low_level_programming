#include "lists.h"
#include <string.h>

/**
 *add_nodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
listint_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);

}
