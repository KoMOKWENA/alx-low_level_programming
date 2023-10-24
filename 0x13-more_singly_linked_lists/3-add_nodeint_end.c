#include "lists.h"


/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer header
 * @n: inout data 
 *
 * Return: addres of new element 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
 listint_t *ptr;
 listint_t *temp = *head;

ptr = malloc(sizeof(listint_t));
if (!ptr)
return (NULL);

ptr->n = n;
ptr->next = NULL;

if (*head == NULL)
{
*head = ptr;
return (ptr);
}

while (temp->next)
temp = temp->next;

temp->next = ptr;

return (ptr);
}

