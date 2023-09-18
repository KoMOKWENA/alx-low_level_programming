#include "main.h"

/**
 * puts2 - function should print only one character out of two characters
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
int longi = 0;
int m = 0;
char *y = str;
int i;


while (*y != '\0')
{
y++;
long++;
}
m = long - 1;
for (i = 0 ; i <= m ; i++)
{
if (i % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}

