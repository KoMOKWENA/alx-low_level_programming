#include "main.h"


/**
 * print_array - a function that prints elements of an array
 * @a: array name
 * @n: the number of elements OF an array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int b;


for (b = 0; b < (n - 1); b++)
{
printf("%d, ", a[b]);
}
if (b == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}

