#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - show data dogs
 * @d: print str
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		d->owner = "(free)";
	if (d->name == NULL)
		d->name = "(free)";
	printf("Name: %s\nOwner: %s\nAge: %f\n", d->name, d->owner, d->age);
}
