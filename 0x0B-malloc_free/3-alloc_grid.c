#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop
 * @width: input width
 * @height: input height
 * Return: *2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		x[y] = malloc(sizeof(int) * width);

		if (x[y] == NULL)
		{
			for (; y >= 0; y--)
				free(x[y]);

			free(x);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			x[y][z] = 0;
	}

	return (x);
}
