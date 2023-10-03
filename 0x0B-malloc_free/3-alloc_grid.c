#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
int **mee;
int w, z;

if (width <= 0 || height <= 0)
return (NULL);


mee = malloc(sizeof(int *) * height);


if (mee == NULL)
return (NULL);


for (w = 0; w < height; w++)
{
mee[w] = malloc(sizeof(int) * width);


if (mee[w] == NULL)
{
for (; w >= 0; w--)
free(mee[w]);

free(mee);
return (NULL);
}
}

for (w = 0; w < height; w++)
{
for (z = 0; z < width; z++)
mee[w][z] = 0;
}

return (mee);
}

