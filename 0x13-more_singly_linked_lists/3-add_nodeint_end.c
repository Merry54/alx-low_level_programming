#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *new;
listint_t *current;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);							
new->n = n;
new->next = NULL;
if (*head == NULL)
	
{
*head = new;
return (new);
}	
current = *head;
while (current->next != NULL)
{	
current = current->next;
}									
current->next = new;
return (new);

}
