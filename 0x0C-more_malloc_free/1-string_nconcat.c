#include <stdlib.h>
/**
 * *string_nconcat - function that  concatenates two strings.
 * @s1: The first string
 * @s2: The second string.
 * @n: int
 * Return: dest
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i = 0, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while  (s1[i])
		i++;
	x = malloc(n + i + 1);
	if (x == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		x[l] = s1[l];
	i = 0;
	for (; i < n && s2[i] != '\0'; l++)
	{
		x[l] = s2[i];
		i++;
	}
	x[l] = '\0';
	return (x);
}
