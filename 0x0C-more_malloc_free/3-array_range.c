#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
int *ptr;
int k, size;


if (min > max)
return (NULL);


size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL);

for (k = 0; min <= max; k++)
ptr[k] = min++;


return (ptr);
}

