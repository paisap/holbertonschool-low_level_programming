#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - function that draws a straight line in the terminal.
 * @filename: The number to be checked
 * @letters: a mounth
 *
 * Return: aux
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t aux;
	char buf[letters + 1];
	int t = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	aux = read(t, buf, (letters));
	if (aux < 0)
		return (0);
	aux = write(1, buf, aux);
	if (aux < 0)
		return (0);
	close(t);
	return (aux);
}
