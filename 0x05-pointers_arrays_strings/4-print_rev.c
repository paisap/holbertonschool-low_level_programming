#include "holberton.h"
/**
 * print_rev -  function that takes a pointer to an int
 * @s: The number to be checked
 *
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	for (; n >= 0; n--)
	{
	_putchar(s[n]);
	}
	_putchar('\n');
}
