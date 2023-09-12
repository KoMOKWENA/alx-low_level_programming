#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, start with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int counting;
unsigned long fib1 = 0, fib2 = 1, sum;

for (counting = 0; counting < 50; counting++)
{
sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;

if (counting == 49)
printf("\n");
else
printf(", ");
}

return (0);
}

