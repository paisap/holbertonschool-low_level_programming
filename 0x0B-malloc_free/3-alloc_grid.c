#include <stdlib.h>
/**
 * **alloc_grid - function that  concatenates two strings.
 * @width: The first string.
 * @height: the seond int
 * Return: dest
 */
int **alloc_grid(int width, int height)
{
	int **ma;
	int i, j;

	if (width == NULL)
		width = 0;
	if (height == NULL)
		height = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	ma = malloc(sizeof(int *) * height);
	if (ma == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		ma[i] =  malloc(sizeof(int) * width);
	if (ma == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ma[i][j] = 0;
	return (ma);
}
