#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: first node address
 * @idx: position index
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *ptr;
listint_t *temp = *head;


ptr = malloc(sizeof(listint_t));
if (!ptr || !head)
return (NULL);


ptr->n = n;
ptr->next = NULL;


if (idx == 0)
{
ptr->next = *head;
*head = ptr;
return (ptr);
}

for (k = 0; temp && k < idx; k++)
{
if (k == idx - 1)
{
ptr->next = temp->next;
temp->next = ptr;
return (ptr);
}
else
temp = temp->next;
}
return (NULL);
}
