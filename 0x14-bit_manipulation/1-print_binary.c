#include "main.h"

/**
 *print_binry - print binary representing a number 
 * @n: num to print in binary
 * 
 */

void print_binary(unsigned long int n)
{
if (n > 1)

print_binry (n >> 1);
_putchar ((n & 1) + '0');
}

