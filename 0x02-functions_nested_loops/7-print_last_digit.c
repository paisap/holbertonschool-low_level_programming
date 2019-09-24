#include "holberton.h"

int print_last_digit(int x)
{
	x = x % 10;
if (x < 0)
{
	x = x * -1;
}

	_putchar('0' + x);
	return (x);
}
