#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{

unsigned int y = 0;
int t;


while (*s)
{
for (t = 0; accept[t]; t++)
{
if (*s == accept[t])
{
y++;
break;
}
else if (accept[t + 1] == '\0')
return (y);
}
s++;
}
return (n);
}

