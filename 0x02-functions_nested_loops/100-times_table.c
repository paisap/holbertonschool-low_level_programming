#include "holberton.h"

/**
 * imprimir1 - Prints "Hello"
 * @n: The number to be checked
 */
void imprimir1(int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + n);
}

/**
 * imprimir2 - Prints "Hello"
 * @n: The number to be checked
 */
void imprimir2(int n)
{
	int d1, d2;

	d1 = n / 10;
	d2 = n % 10;
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + d1);
	_putchar('0' + d2);
}

/**
 * print_times_table - print the table
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
					imprimir1(c);
				}
				else if (c < 100)
				{
					imprimir2(c);
				}
				else
				{
					f = c / 10;
					f = f % 10;
					d = c / 100;
					e = c % 10;
					_putchar (',');
					_putchar (' ');
					_putchar ('0' + d);
					_putchar ('0' + f);
					_putchar ('0' + e);
				}
				c = c + a;
			}
			_putchar ('\n');
			a++;
			c = a;
		}
	}
}
