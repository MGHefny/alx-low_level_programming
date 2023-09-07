#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates memoryusing malloc and free
 * @ptr: pointer memory
 * @old_size: size memory  ptr
 * @new_size: new size memory block
 * Return: pointer memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			p[x] = old_p[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p[x] = old_p[x];
	}

	free(ptr);
	return (p);
}
