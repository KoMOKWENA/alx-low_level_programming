#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return:  0 Always (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}

