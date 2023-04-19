#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - the dog function
 * @d: dog parameter
 *
 * Return: d pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
