#include "lists.h"


/**
 * pop_listint - deletes the head node of a linked list
 * @head: header linked list
 *
 * Return: the head node
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int cont;

if (!head || !*head)
return (0);

cont = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

 return (cont);
}

