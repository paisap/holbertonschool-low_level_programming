#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: el ac
 * @av: el av
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int p = open(av[2], O_CREAT | O_RDWR | O_TRUNC | O_APPEND, 664);
	int t = open(av[1], O_RDONLY);
	char buf[1024];
	int aux = 1024, aux1 = 0;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]), exit(97);
	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (p == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]), exit(99);
	while (aux == 1024)
	{
		aux = read(t, buf, 1024);
		if (aux == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		aux1 = write(p, buf, aux);
		if (aux1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

	}
	if (close(p) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", p);
		exit(100);
	}
	if (close(t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t);
		exit(100);
	}
	return (1);

}
