#include "holberton.h"
#include <stdlib.h>
/**
 * append_txt_to_file - function that draws a straight line in the terminal.
 * @filename: The number to be checked
 * @text_content: a mounth
 *
 * Return: aux
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int t = open(filename, O_WRONLY | O_APPEND, 0600), i = 0;

	if (t == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	if (write(t, text_content, i) == -1)
		return (-1);

	return (1);
}
