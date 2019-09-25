#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, a;

	for (a = 1; a < 1024; a++)
	{
	if ((a % 3) == 0 || (a % 5) == 0)
	{
	x += a;
	}
	}
	printf("%d\n", x);
}
