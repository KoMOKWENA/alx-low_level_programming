#include "main.h"


/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int k, o;


k = 0;


while (k < 24)
{
o = 0;
while (o < 60)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
_putchar(':');
_putchar((o / 10) + '0');
_putchar((o % 10) + '0');
_putchar('\n');
o++;
}
k++;
}
}
