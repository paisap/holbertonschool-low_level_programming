#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: x
 */

int main(void)
{
	int x, c;

	x = 2772;
	srand(time(NULL));
	c = 32 + rand() % (126 - 32);
	while (x != 0)
	{
		printf("%c", c);
		x = x - c;
		c = 32 + rand() % (126 - 32);
		if (x < 126 && x > 32)
		{
			c = x;
		}
	}
}
