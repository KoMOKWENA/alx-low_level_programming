#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int len;

len = 0;
if (!b)
return (0);
for (k = 0; b[k] != '\0'; k++)
{
if (b[k] != '0' && b[k] != '1')
return (0);
}
for (k = 0; b[k] != '\0'; k++)
{
len <<= 1;
if (b[k] == '1')
len += 1;
}
return (len);
}

