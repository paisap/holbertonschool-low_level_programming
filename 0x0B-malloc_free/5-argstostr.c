#include <stdlib.h>
/**
 * *argstostr - function that  concatenates two strings.
 * @ac: The first string.
 * @av: the seond int
 * Return: dest
 */
char *argstostr(int ac, char **av)
{
	int i = 0, acu, m = 0;
	char *ax, *r;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		ax = av[i];
		while (*ax)
		{
			acu++;
			ax++;
		}
		acu++;
		i++;
	}
	r = malloc(acu + 1);
	i = 0;
	while (i < ac)
	{
		ax = av[i];
		while (*ax)
		{
			r[m] = *ax;
			ax++;
			m++;
		}
		r[m] = '\n';
		m++;
		i++;
	}
	r[acu + 1] = '\0';
	return (r);
}
