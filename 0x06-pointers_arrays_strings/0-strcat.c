/**
 * *_strcat - function that  concatenates two strings.
 * @dest: The first string
 * @src: The string concatenates
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	b = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
