#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
} else
{
int m, g;

for (m = 0; m < n; m++)
{
for (g = 0; g < n; g++)
{
if (g == m)
_putchar('\\');
else if (g < m)
_putchar(' ');
}
_putchar('\n');
}
}
}

