#include "holberton.h"
/**
 * times_table - print the table
 *
 */
void times_table(void)
{
int a, b, c, d, e;

	a = 0;
	c = a;
	while (a < 10)
	{
		_putchar(48);
		for (b = 0; b < 10; b++)
		{

			if (c < 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + c);
			}
			else
			{
				d = c / 10;
				e = c % 10;
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + d);
				_putchar ('0' + e);
			}
			c = c + a;
		}
		_putchar ('\n');
		a++;
		c = a;


	}
}
