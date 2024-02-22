#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner's name
 *
 * Return: new dog info, NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));


	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog->name);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		return (NULL);
	}

	return (newDog);
}
