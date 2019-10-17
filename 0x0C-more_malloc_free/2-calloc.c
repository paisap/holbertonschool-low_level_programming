#include <stdlib.h>
/**
 * *_calloc - function that  concatenates two strings.
 * @size: The first string
 * @nmemb: the second string
 * Return: dest
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i = 0;
	int *l;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = malloc(nmemb * size);
	if (l == NULL)
		return (NULL);
	while (l[i])
	{
		l[i] = 0;
		i++;
	}
	a = l;
	return (a);
}
