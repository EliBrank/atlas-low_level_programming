#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes var of type dog
 * @d: dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
