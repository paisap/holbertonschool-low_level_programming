#include "holberton.h"
#include <stdio.h>
/**
 * times_table - print the table
 * @n: The number to be checked
 */
void print_times_table(int n)
{
int a, b, c, d, e, f;

	a = 0;
	c = a;
	if (n > 0 && n < 15)
	{
		while (a < n + 1)
		{
			_putchar(48);
			for (b = 0; b < n; b++)
			{
				if (c < 10)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (' ');
					_putchar ('0' + c);
				}
				else if (c < 100)
				{
					d = c / 10;
					e = c % 10;
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar ('0' + d);
					_putchar ('0' + e);
				}
				else
				{
					f = c / 10;
					f = f % 10;
					d = c / 100;
					e = c % 10;
					printf(", %d", c);
				}
				c = c + a;
			}
			_putchar ('\n');
			a++;
			c = a;	
		}
	}
}
