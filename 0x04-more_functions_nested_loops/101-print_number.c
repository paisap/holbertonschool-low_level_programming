#include "holberton.h"
/**
 * print_number - function that draws a straight line in the terminal.
 * @n: The number to be checked
 *
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	if (a / 10)
	{
		print_number1(a / 10);
	}
	_putchar('0' + (a % 10));
}
