#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
int long = 0;
int a;


while (*s != '\0')
{
long++;
s++;
}
s--;
for (a = long; a > 0; a--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}

