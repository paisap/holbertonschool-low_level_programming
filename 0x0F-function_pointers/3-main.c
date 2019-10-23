#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @argc: argc.
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char x;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = *argv[2];
	p = argv[2];
	if ((x != 43 && x != 45 && x != '*' && x != 47 && x != 37) || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((x == 47 && atoi(argv[3]) == 0) || (x == 37 && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
