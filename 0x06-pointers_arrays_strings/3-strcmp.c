/**
 * _strcmp - function that  concatenates two strings.
 * @s1: The first string
 * @s2: The string concatenates
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, c, d;

	b = 0;
	a = 0;
	c = 0;
	d = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && b == 0)
	{
		if (s1[a] != s2[a])
		{
			c = s1[a];
			d = s2[a];
			b++;
		}
	a++;
	}
	if (b == 0)
	{
		c = s1[a];
		d = s2[a];
	}
	return (c - d);
}
