/**
 * *cap_string - function that  concatenates two strings.
 * @c: character validado
 * Return: *char
 */
char *cap_string(char *c)
{
	int a, b;

	b = 0;
	if (c[0] >= 97 && c[0] <= 122)
	{
		c[0] = c[0] - 32;
	}
	a = 0;
	while (c[a] != '\0')
	{
		if (c[a] == 32 || c[a] == '\t' || c[a] == '\n' || c[a] == ',')
			b = 1;
		if (c[a] == ';' || c[a] == '!' || c[a] == '?' || c[a] == 34)
			b = 1;
		if (c[a] == '(' || c[a] == ')' || c[a] == '{' || c[a] == '}' || c[a] == '.')
			b = 1;
		if (b == 1)
		{
			if (c[a + 1] >= 97 && c[a + 1] <= 122)
				c[a + 1] = c[a + 1] - 32;
			b = 0;
		}
		a++;
	}
	return (c);
}
