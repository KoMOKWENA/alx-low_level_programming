#include "main.h"

/**
 * print_square - print a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int m, g;

for (m = 0; m < size; m++)
{
for (g = 0; g < size; g++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

