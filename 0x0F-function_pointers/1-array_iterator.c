#include <stddef.h>
/**
 * array_iterator - function that  concatenates two strings.
 * @array: the arraY
 * @size: The first string.
 * @action: the char.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
