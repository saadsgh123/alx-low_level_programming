#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - check the code
 * @name:name.
 * @age:age of dog
 * @owner:dog owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = (dog_t *)malloc(sizeof(dog_t));

	if (newd == NULL)
		return (NULL);

	if (name != NULL && owner != NULL)
	{
		newd->name = strdup(name);
        	newd->owner = strdup(owner);
        	newd->age = age;
	}
	else
	{
		free(newd);
		return (NULL);
	}

	return (newd);
}
