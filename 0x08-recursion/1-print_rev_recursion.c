#include "holberton.h"
/**
 * _print_rev_recursion - function that  concatenates two strings.
 * @s: The first string
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s = s + 1;
		_print_rev_recursion(s);
	}
	s = s - 1;
	_putchar(s[0]);
}
