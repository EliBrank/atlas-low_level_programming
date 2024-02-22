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
	{
		return (NULL);
	}

	if (newDog->name == NULL)
		return (NULL);

	if (newDog->owner == NULL)
		return (NULL);

	strcpy(newDog->name = name);
	newDog->age = age;
	strcpy(newDog->owner = owner);

	return (newDog);
}
