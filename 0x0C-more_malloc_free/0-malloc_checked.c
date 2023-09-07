#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory using malloc
 * @b: number bytes
 * Return: pointer memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
