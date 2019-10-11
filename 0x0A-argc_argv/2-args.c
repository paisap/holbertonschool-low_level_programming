#include <stdio.h>
/**
* main - check the code for Holberton School students.
* @argc: int arguments.
* @argv: varuable.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
