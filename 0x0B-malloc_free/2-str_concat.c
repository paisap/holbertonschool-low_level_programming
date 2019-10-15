#include <stdlib.h>
/**
 * str_concat - function that  concatenates two strings.
 * @s1: The first string
 * @s2: the second string
 * Return: dest
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, i, m;
	char *r;

	while (s1[x])
		x++;
	while (s2[y])
		y++;
	r = malloc(sizeof(char) * (x + (y + 1)));
	if (r == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		r[i] = s1[i];
	m = i;
	for (i = 0; i <= y; i++)
	{
		r[m] = s2[i];
		m++;
	}
	return (r);
}
