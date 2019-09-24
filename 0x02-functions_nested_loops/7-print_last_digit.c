#include "holberton.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 * @x: The number to be checked
 *
 * Return: the value of the last digit
 */
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
