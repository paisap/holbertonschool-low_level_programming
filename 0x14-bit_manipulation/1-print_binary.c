#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - function that draws a straight line in the terminal.
 * @n: The number to be checked
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux = 4096, b = 0;
	unsigned long int t = 0;
	int x = 0;

	if (n == t)
	{
		_putchar('0');
		return;
	}
	while (aux != 0)
	{
		x = n - aux;
		if (x >= 0)
		{
			b = 1;
			_putchar('1');
			n = n - aux;
		}
		else
		{
			if (b == 1)
				_putchar('0');
		}
		aux = aux * 0.5;
	}
}
