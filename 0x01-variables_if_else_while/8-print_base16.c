#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 48; a < 58; a++)
	{
	putchar(a);
	}

	a = 'a';

	while (a < 'g')
	{
	putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
