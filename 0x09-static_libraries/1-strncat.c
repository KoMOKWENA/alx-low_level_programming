#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input a value
 * @src: input a value
 * @n: input a value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int l;
int o;

l = 0;
while (dest[l] != '\0')
{
l++;
}
o = 0;
while (o < n && src[o] != '\0')
{
dest[l] = src[o];
l++;
o++;
}
dest[l] = '\0';
return (dest);
}

