/**
 * *_memcpy - function that  concatenates two strings.
 * @dest: The first string
 * @src: The string concatenates
 * @n : n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
