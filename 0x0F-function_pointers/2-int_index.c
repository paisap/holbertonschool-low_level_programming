#include <stdlib.h>
/**
 * int_index - function that  concatenates two strings.
 * @array: the array
 * @size: The first string.
 * @cmp: the ponter fuc
 * Return: dest.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if ((*cmp) == NULL || array == NULL)
		return(-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = (*cmp)(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}
