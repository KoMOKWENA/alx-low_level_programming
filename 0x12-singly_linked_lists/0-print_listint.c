#include "lists.h"
#include <stdio.h>

/**
 *Print_list - print all the elements of lionked list
 *@h: pointer to the list_t list to print 
 *
 *Return : nodes printed
 */

size_t print_listint(const listint_t *h)
{
size_t k = 0;

while (h)
{
k++;
printf("%d\n", h->n);
h = h->next;
}
return (k);
}
