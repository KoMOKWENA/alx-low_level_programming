#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
char *conct;
int j, km;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";


j = km = 0;
while (s1[j] != '\0')
j++;
while (s2[km] != '\0')
km++;
conct = malloc(sizeof(char) * (j + km + 1));


if (conct == NULL)
return (NULL);
j = km = 0;
while (s1[j] != '\0')
{
conct[j] = s1[j];
j++;
}

while (s2[km] != '\0')
{
conct[j] = s2[km];
j++, km++;
}
conct[j] = '\0';
return (conct);
}

