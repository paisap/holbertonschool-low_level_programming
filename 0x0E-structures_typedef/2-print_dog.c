#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that gets the length of a prefix substring.
 * @d: The first string
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!d->age)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
