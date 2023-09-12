#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - valus of struct
 * @d: str pointer
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}

