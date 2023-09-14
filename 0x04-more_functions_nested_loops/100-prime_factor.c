#include <stdio.h>
#include <math.h>

/**
 * main - find and print the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
long int c;
long int kay;
long int a;

c = 612852475143;
kay = -1;

while (c % 2 == 0)
{
kay = 2;
c /= 2;
}

for (a = 3; a <= sqrt(c); a = a + 2)
{
while (c % a == 0)
{
kay = a;
c = c / a;
}
}

if (c > 2)
kay = c;

printf("%ld\n", kay);
return (0);
}

