/**
 * *_memset - function that  concatenates two strings.
 * @s: The first string
 * @b: The string concatenates
 * @n: n times
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
return (s);
}
