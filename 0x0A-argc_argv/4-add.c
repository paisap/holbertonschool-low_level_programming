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
	int i = 1, j = 0, x = 0;
	char *s;

	for (; i < argc ; i++)
	{
		s = argv[i];
		while (s[x])
		{
			if (s[x] < 47 || s[x] >= 58)
			{
				printf("Error\n");
				return (1);
			}
			x++;
		}
		x = 0;
		j = j + atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
