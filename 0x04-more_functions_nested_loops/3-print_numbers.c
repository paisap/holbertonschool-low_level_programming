#include "holberton.h"

/**
 * print_numbers - print the alphabet
 *
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
