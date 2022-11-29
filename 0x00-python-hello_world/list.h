#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 *  struct listint_s - singly linked list
 *  @n: integer
 *  @next: point to the next node 
 * 
 * describtion :  singly linked list node structure
 * for ALX project
 */

typedef struct listint_s
{
int n;
struct listint_s next;
} liint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free__listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /*LISTS_H */
