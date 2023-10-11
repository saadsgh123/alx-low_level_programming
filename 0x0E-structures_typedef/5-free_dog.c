#include <stdlib.h>
#include <dog.h>
/**
 * free_dog - check the code
 * @d: pointer to dog_t.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
