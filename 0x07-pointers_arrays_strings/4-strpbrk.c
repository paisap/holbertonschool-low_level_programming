/**
 * *_strpbrk - function that  concatenates two strings.
 * @s: The first string
 * @accept: The string concatenates
 * Return: dest
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b = 0;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return (s + a);
}
