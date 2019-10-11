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
	int i = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	printf("Error\n");
	return (1);
}
