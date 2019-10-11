/**
 * *_strncat - function that  concatenates two strings.
 * @dest: The first string
 * @src: The string concatenates
 * @n: the number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;

	b = 0;
	a = 0;
	c = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (b < n && b < c)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
