#include <stdio.h>
#include <stdlib.h>
#include <dog.h>
/**
 * free_dog - check the code
 * @dog: pointer to dog_t.
 */
void free_dog(dog_t *dog)
{
	if (dog != NULL)
	{	
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}
