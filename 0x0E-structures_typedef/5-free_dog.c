#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - functions that free dog_t types from memory
 * @d: pointer to the dog_t type in memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
