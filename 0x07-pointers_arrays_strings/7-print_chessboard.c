#include "holberton.h"
/**
 * print_diagsums - function that  concatenates two strings.
 * @a: The first string
 * @size: The string concatenates
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
