#include "holberton.h"
/**
 * puts2 -  function that takes a pointer to an int
 * @str: The number to be checked
 *
 */
void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}
