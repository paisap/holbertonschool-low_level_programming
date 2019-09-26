#include "holberton.h"
/**
 * print_diagonal - Check if a number is alphabetic character
 * @n: The number to be checked
 *
 */
void print_diagonal(int n)
{

	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(92);
			_putchar('\n');
			if (a < (n - 1))
			{
				for (b = 0; b < (a + 1); b++)
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
	_putchar('\n');
	}
}
