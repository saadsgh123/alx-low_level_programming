#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - dog struct
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog'S owner name.
 * Return: new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *d;
	int name_len = 0, owner_len = 0;

	while (name[name_len] != '\0')
	{
		name_len++;
	}

	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(name_len + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(owner_len + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
/**
 * _strcpy - dog struct
 * @dest: dog's name.
 * @src: dog's age.
 * Return: new dog_t
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
