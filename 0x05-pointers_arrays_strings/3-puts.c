#include "holberton.h"
/**
 * _puts -  function that takes a pointer to an int
 * @str: The string chek
 *
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
