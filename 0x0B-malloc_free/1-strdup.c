#include <stdlib.h>
/**
 * _strdup - function that  concatenates two strings.
 * @str: The first string
 * Return: dest
 */
char *_strdup(char *str)
{
	char *x;
	int t = 0, o = 0;

	if (str == NULL)
		return (NULL);
	while (str[t])
		t++;
	x = malloc(sizeof(char) * (t + 1));
	if (x == NULL)
		return (NULL);
	while (o <= t)
	{
		x[o] = str[o];
		o++;
	}
	return (x);
}
