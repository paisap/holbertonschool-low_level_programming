#include "holberton.h"

/**
 * more_numbers - print the alphabet
 *
 */
void more_numbers(void)
{
	int x, y, d, e;

	y = 1;
	e = 0;
	while (e < 10)
	{
	d = 0;
		for (x = 0; x < 15; x++)
		{
		if (x > 9)
		{
			_putchar('0' + y);
			if (x == 10)
			{
			d = y - 1;
			}
		}
		_putchar('0' + d);
		d++;
		}

	_putchar('\n');
	e++;
	}
}
