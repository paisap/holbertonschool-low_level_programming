#include "search_algos.h"
/**
 * recursice - binary_search.
 * @array: the array
 * @min: The size of array
 * @max: the max value
 * @value: value search
 * Return: return value
 */
int recursice(int *array, int min, int max, int value)
{
	int mitad = 0, i;

	if (min > max)
		return (-1);
	mitad = (min + max) / 2;
	printf("Searching in array: ");
	for (i = min; i <= max; i++)
	{
		if (i == max)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");
	if (array[mitad] == value)
		return (mitad);
	if (array[mitad] > value)
		return (recursice(array, min, mitad - 1, value));
	return (recursice(array, mitad + 1, max, value));
}
/**
 * binary_search - binary_search.
 * @array: the array
 * @size: The size of array
 * @value: age of dog
 * Return: return value
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursice(array, 0, size - 1, value));
}
