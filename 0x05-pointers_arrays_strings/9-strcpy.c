/**
 * *_strcpy - function that multiplies two integers.
 * @dest: The number to be checked
 * @src: The number to be checked
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		 a++;
	}
	for (b = 0; b <= a; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
