#include "holberton.h"
/**
 * print_number - function that draws a straight line in the terminal.
 * @n: The number to be checked
 *
 */
void print_number(int n)
{
	int contador, a, b, c, num, t;

	t = 0;
	if (n < 0)
	{
	n = n * -1;
	t++;
	}
	num = n;
	b = 1;
	contador = 1;
	while (num / 10 > 0)
	{
	num = num / 10;
	contador++;
	}
	for (a = 1; a < contador; a++)
	{
	b = b * 10;
	}
	for (c = 0; c < contador; c++)
	{
		if ( t == 1)
		{
			_putchar('-');
			t++;
		}
	_putchar('0' + (n / b));
	n = n % b;
	b = b / 10;
	}
	
}
