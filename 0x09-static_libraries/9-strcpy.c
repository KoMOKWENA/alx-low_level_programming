#include "main.h"

/**
 * char *_strcpy - a function that copies a string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
int s = 0;
int t = 0;


while (*(src + s) != '\0')
{
s++;
}
for ( ; t < s ; t++)
{
dest[t] = src[t];
}
dest[s] = '\0';
return (dest);
}

