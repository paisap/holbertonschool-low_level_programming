#include "holberton.h"
/**
 * get_bin - function that draws a straight line in the terminal.
 * @n: The number to be checked
 * @index: the posicion
 * Return: the byte
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux = 4096, b = 0;
	unsigned long int t = 0, m = 0;
	int x = 0;
	int s[30];

	if (n == t)
		s[m] = 0, m++;
	else
	{
		while (aux != 0)
		{
			x = n - aux;
			if (x >= 0)
			{
				b = 1;
				s[m] = 1;
				m++;
				n = n - aux;
			}
			else
			{
				if (b == 1)
					s[m] = 0, m++;
			}
			aux = aux * 0.5;
		}
	}
	if (index >= m)
		return (-1);
	x = s[m - (index + 1)];
	return (x);

}
