#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input a value
 * @src: input a value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int c;
int d;

c = 0;
while (dest[c] != '\0')
{
c++;
}
d = 0;
while (src[d] != '\0')
{
dest[c] = src[d];
c++;
d++;
}
