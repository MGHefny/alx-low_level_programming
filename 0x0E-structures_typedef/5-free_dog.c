#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free str dog
 * @d: str dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
