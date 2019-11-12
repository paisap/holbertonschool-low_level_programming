#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - function that draws a straight line in the terminal.
 * @filename: The number to be checked
 * @letters: a mounth
 *
 * Return: aux
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t aux, t;
	char *buf;

	if (filename == NULL)
		return (0);
	t = open(filename, O_RDONLY);
	if (t == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	aux = read(t, buf, (letters));
	if (aux == -1)
		return (0);
	aux = write(1, buf, aux);
	if (aux == -1)
		return (0);
	close(t);
	return (aux);
}
