#include "holberton.h"
/**
 * print_square - Check if a number is alphabetic character
 * @size: The number to be checked
 *
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
