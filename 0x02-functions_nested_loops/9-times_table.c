#include "main.h"


/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int l, m, o;


for (l = 0; l < 10; l++)
{
for (m = 0; m < 10; m++)
{
o = m * l;
if (m == 0)
{
_putchar(o + '0');
}


if (o < 10 && m != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(o + '0');
}
else if (o >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((o / 10) + '0');
_putchar((o % 10) + '0');
}
}
_putchar('\n');
}
}
