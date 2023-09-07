#include <stdlib.h>
#include "main.h"
/**
 * *array_range - create arr of integer
 * @min: minimum valuse elem
 * @max: maximum range values elem
 * Return: pointer of array
 */
int *array_range(int min, int max)
{
	int *p;
	int x, siz;

	if (min > max)
		return (NULL);

	siz = max - min + 1;

	p = malloc(sizeof(int) * siz);

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = min++;

	return (p);
}
