#include <stdlib.h>
/**
 * *_realloc - function that  concatenates two strings.
 * @ptr: The first string
 * @old_size: the second string
 * @new_size: new size
 * Return: dest
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i = 0;
	void *x;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	for (i = 0; ((char *)ptr)[i] != '\0'; i++)
		((char *)x)[i] = ((char *)ptr)[i];
	free(ptr);
	return (x);
}
