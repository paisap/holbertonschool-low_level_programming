#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code for Holberton School students.
* @argc: int arguments.
* @argv: varuable.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i = 0, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	x = atoi(argv[1]);
	while (x > 0)
	{
		if (x >= 25)
			x = x - 25;
		else if (x >= 10)
			x = x - 10;
		else if (x >= 5)
			x = x - 5;
		else if (x >= 2)
			x = x - 2;
		else if (x >= 1)
			x = x - 1;
		i++;
	}
		printf("%d\n", i);
		return (0);
}
