#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet x 10
 *
 */
void print_alphabet_x10(void)
{
	char letra = 'a';

	int numero = 0;

	for ( ; numero <= 9; numero++)
	{
	letra = 'a';
	for (; letra <= 'z'; letra++)
	{
	_putchar(letra);
	}
	_putchar('\n');
	}
}
