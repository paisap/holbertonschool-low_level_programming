#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that gets the length of a prefix substring.
 * @d: The first string
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		;
	else
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
