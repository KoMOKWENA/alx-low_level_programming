#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
int k, l, m;

k = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (k < size)
{
l = size - o < 10 ? size - o : 10;
printf("%08x: ", o);
for (m = 0; m < 10; m++)
{
if (m < l)
printf("%02x", *(b + o + m));
else
printf("  ");
if (m % 2)
{
printf(" ");
}
}
for (m = 0; m < l; m++)
{
int c = *(b + k + m);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
k += 10;
}
}
dest[m] = '\0';
return (dest);
}

