/**
 * *_strchr - function that  concatenates two strings.
 * @s: The first string
 * @c: The string concatenates
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
		{
			s = (s + x);
			return (s);
		}
		x++;
	}
	s = 0;
	return (s);
}
