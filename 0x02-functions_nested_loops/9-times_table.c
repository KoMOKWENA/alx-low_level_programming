#include "main.h"


/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int l, m, o;


for (k = 0; l < 10; l++)
{
for (m = 0; m < 10; m++)
{
n = m * l;
if (m == 0)
{
_putchar(n + '0');
}


if (l < 10 && m != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(l + '0');
} else if (l >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}
}
