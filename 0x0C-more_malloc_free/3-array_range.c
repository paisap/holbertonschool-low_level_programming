#include <stdlib.h>
/**
 * *array_range - function that  concatenates two strings.
 * @min: The first string
 * @max: the second string
 * Return: dest
 */
int *array_range(int min, int max)
{
	int i = 0, *p;

	if (min > max)
		return (NULL);
	p = malloc((max + 1) * 4);
	if (p == NULL)
		return (NULL);
	while (min != max)
	{
		p[i] = min;
		i++;
		min++;
	}
	p[i] = max;
	return (p);
}
