#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
int j, m, t = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);


for (j = 0; j < ac; j++)
{
for (m = 0; av[j][m]; m++)
l++;
}
l += ac;


str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (m = 0; av[j][m]; m++)
{
str[t] = av[j][m];
t++;
}
if (str[t] == '\0')
{
str[t++] = '\n';
}
}
return (str);
}

