#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char ko;

for (ko = 'z'; ko >= 'a'; ko--)
{
putchar(ko);
}
putchar('\n');
return (0);
}
