/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: The first string
 * @accept: The string concatenates
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, b = 0, y = 1, n = 0;

	while (s[x] != '\0' && y != 0)
	{
		b = 0;
		while (accept[b] != '\0' && y == 1)
		{
			if (s[x] == accept[b])
			{
				n++;
				y = 2;
			}
			else
			{
				y = 1;
			}
			b++;
		}
		if (y == 2)
			y = 1;
		else
			y = 0;
		x++;
	}
	return (n);
}
