#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer header
 *
 * Return: elements
 */
size_t listint_len(const listint_t *h)
{
size_t cont = 0;

while (h)
{
cont++;
h = h->next;
}
return (cont);
}

