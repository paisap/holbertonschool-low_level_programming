#include <stdlib.h>
/**
 * free_grid - function that  concatenates two strings.
 * @grid: The first string.
 * @height: the seond int
 * Return: dest
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
