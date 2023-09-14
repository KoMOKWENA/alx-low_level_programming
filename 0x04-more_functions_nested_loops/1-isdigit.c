#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: is the char to be checked
 *
 * Return: 0 on failure and 1 success
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}

