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
	int i, acu = 0;
	char *x;

	for (i = 1; i < argc; i++)
	{
		x = argv[i];
		while (*x)
		{
			if (*x < 47 || *x > 57)
			{
				printf("Error\n");
				return (1);
			}
			x++;
		}
		acu = acu + atoi(argv[i]);
	}
	printf("%d\n", acu);

	return (0);
}
