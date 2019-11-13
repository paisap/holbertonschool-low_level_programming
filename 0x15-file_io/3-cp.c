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
	int p = 0, t = 0;
	char buf[1024];
	int aux = 1024, aux1 = 0;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	t = open(av[1], O_RDONLY);
	if (t == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	p = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(t), exit(99);
	}
	while (aux == 1024)
	{
		aux = read(t, buf, 1024);
		if (aux == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		aux1 = write(p, buf, aux);
		if (aux1 < aux)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
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
	return (0);
}
