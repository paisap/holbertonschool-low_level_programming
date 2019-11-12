#include "holberton.h"
#include <stdlib.h>
/**
 * create_file - function that draws a straight line in the terminal.
 * @filename: The number to be checked
 * @text_content: a mounth
 *
 * Return: aux
 */
int create_file(const char *filename, char *text_content)
{
	int t = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600), i = 0;

	if (t == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	if (write(t, text_content, i) == -1)
		return (-1);
	return (1);
}
