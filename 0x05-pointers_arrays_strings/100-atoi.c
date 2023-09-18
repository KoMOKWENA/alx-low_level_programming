#include "main.h"


/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from string
 */

int _atoi(char *s)
{
int a, d, c, len, b, digit;


a = 0;
d = 0;
c = 0;
len = 0;
b = 0;
digit = 0;


while (s[len] != '\0')
len++;


while (a < len && b == 0)
{
if (s[a] == '-')
++d;


if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (d % 2)
digit = -digit;
c = c * 10 + digit;
b = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
b = 0;
}
a++;
}
if (b == 0)
return (0);


return (c);
}
