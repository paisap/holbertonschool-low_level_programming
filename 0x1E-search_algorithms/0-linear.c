#include "search_algos.h"
/**
 * linear_search - linear_search.
 * @array: the array
 * @size: The size of array
 * @value: age of dog
 * Return: return value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int t = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			t = 1;
			break;
		}
	}
	if (t == 1)
		return (i);
	return (-1);
}
