#include "holberton.h"
/**
 * get_bit - function that draws a straight line in the terminal.
 * @n: The number to be checked
 * @index: the posicion
 * Return: the byte
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 0;

	if (n == 0 && index == 0)
		return (0);

	while (x < index)
	{
		n = n >> 1;
		if (n == 0)
			return (-1);
		x++;
	}
	return (n & 1);
}
