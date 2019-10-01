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
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
