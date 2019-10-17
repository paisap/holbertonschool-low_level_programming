#include <stdlib.h>
/**
 * *malloc_checked - function that  concatenates two strings.
 * @b: The first string.
 * Return: p in case of.
 */
void *malloc_checked(unsigned int b)
{

	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
