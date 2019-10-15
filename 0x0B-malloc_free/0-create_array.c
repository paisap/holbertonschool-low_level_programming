#include <stdlib.h>
/**
 * *create_array - function that  concatenates two strings.
 * @size: The first string.
 * @c: the char.
 * Return: dest.
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
