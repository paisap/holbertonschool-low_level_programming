/**
 * *_strncpy - function that  concatenates two strings.
 * @dest: The first string
 * @src: The string concatenates
 * @n: the number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
