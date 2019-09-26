#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{

	long b, number, valor, mayor;

	mayor = 0;
	number = 612852475143;
	b = 2;
	for (; number != 1;)
	{
		if ((number % b) == 0)
		{
			number = number / b;
			valor = b;
		}
		else
		{
		b++;
		}
		if (valor > mayor)
		{
			mayor = b;
		}
	}
	printf("%li\n", mayor);
	return (0);
}
