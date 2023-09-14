#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: parameter to be checked
 *
 * Return: 0 on failure  1 on success
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

