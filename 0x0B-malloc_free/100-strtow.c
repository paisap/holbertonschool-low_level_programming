#include <stdlib.h>
int cp(char *str)
{
	int i = 0, p = 0, b = 0;

	while(str[i])
	{
		if (str[i] != ' ')
		{
			p++;
			i++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			if (str[i] == '\0')
			b = 1;
		}
	if (b == 0)
		i++;
	}
	return (p);
}
void free_grid(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
/**
 * **strtow - function that  concatenates two strings.
 * @str: The first string
 * Return: dest
 */
char **strtow(char *str)
{
	char **rm;
	int i = 0, j = 0, aux = 0, aux1 = 0, t = 0, ll = 0, s = 0;

	aux = cp(str);
	rm = malloc(sizeof(char *) * aux);
	for (i = 0; i < aux; i++)
	{
		aux1 = 0;
		j = 0;
		t = 0;
		while (t == 0)
		{
			if (str[j] != ' ')
			{
				s = j;
				while (str[j] != ' ')
				{
					aux1++;
					j++;
					t = 1;
				}
			}
			j++;
		}
		rm[i] = malloc(sizeof(char) * aux1);
		if (rm[i] == NULL)
		{
			free_grid(rm, i);
			return (NULL);
		}
		for (ll = 0; ll < aux1; ll++)
			rm[i][ll] = str[s];
		}
	return (rm);
}

