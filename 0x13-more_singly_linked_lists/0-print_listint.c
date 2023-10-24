#include "lists.h"


/**
 * print_listint -the function that prints all the elements of a linked list
 * @h: header pointer 
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t cont = 0;

while (h)
{
printf("%d\n", h->n);
cont++;
h = h->next;
}
return (cont);
}
