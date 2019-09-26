#include "holberton.h"
/**
 * mostrar3 - Prints 3 digits
 * @n: The number to be checked
 */
void mostrar3(int n)
{
	int d1, d2, d3;

	d1 = n / 100;
	d2 = (n / 10) % 10;
	d3 = n % 10;
	_putchar(',');
	_putchar(' ');
	_putchar('0' + d1);
	_putchar('0' + d2);
	_putchar('0' + d3);
}

/**
 * mostrar2 - Prints 2 digits
 * @n: The number to be checked
 */
void mostrar2(int n)
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
 * mostrar1 - Prints 1 digit
 * @n: The number to be checked
 */
void mostrar1(int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + n);
}

/**
 * print_times_table - entry point
 *
 * @n: int variable
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	}
	else
	{
		int i, m, a;

		for (i = 0; i < (n + 1); i++)
		{
			a = 0;
			_putchar('0' + 0);
			for (m = 0; m < n; m++)
			{
				if ((a + i) > 99)
					mostrar3(a + i);
				else if ((a + i) > 9)
					mmostrar2(a + i);
				else
					mostar1(a + i);

				a = a + i;
			}
			_putchar('\n');
		}
	}
}
