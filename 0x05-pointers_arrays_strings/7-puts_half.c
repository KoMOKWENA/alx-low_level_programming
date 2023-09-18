#include "main.h"

/**
 * puts_half - a function that prints half of string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
int i, j, long;


long = 0;


for (i = 0; str[i] != '\0'; i++)
long++;


j = (long / 2);


if ((long % 2) == 1)
j = ((long + 1) / 2);


for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}

