#include <stdio.h>
#include "main.h"


/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{

int j, k, n, len, l, digit;

j = 0;
k = 0;
n = 0;
len = 0;
l = 0;
digit = 0;


while (s[len] != '\0')
len++;

while (j < len && l == 0)
{
if (s[j] == '-')
++k;

if (s[j] >= '0' && s[j] <= '9')
{
digit = s[j] - '0';
if (k % 2)
digit = -digit;
n = n * 10 + digit;
l = 1;
if (s[j + 1] < '0' || s[j + 1] > '9')
break;
l = 0;
}
j++;
}

if (l == 0)
return (0);


return (n);
}


/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;


printf("%d\n", result);

return (0);
}


