/**
 * *_strchr - function that  concatenates two strings.
 * @s: The first string
 * @c: The string concatenates
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	int x, t = 0;

	x = 0;
	while (s[x])
		x++;
	for (; t <= x; t++)
	{
		if (s[x] == c)
		{
			s = (s + x);
			break;
		}
		else if (t == x)
			s = 0;
	}
	return (s);
}
