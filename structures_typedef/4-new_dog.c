#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *dupStr;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len])
	{
		len++;
	}

	dupStr = malloc(sizeof(char) * len + 1);

	if (dupStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dupStr[i] = str[i];
	}

	dupStr[i] = '\0';

	return (dupStr);
}

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

	newDog->name = _strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = _strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
