#include "holberton.h"
/**
 * puts_half -  function that takes a pointer to an int
 * @str: The number to be checked
 *
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	b = a;
	if ((a % 2) != 0)
	{
		a = (a - 1) / 2;
	}
	else
	{
		a = a / 2;
	}
	for (; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
