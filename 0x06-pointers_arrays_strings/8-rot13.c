/**
 * *rot13 - function that  concatenates two strings.
 * @c: character validado
 * Return: *char
 */
char *rot13(char *c)
{
	int a = 0, b;
	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *op = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[a] != '\0')
	{
		b = 0;
		while (b < 52)
		{
			if (c[a] == in[b])
			{
				c[a] = op[b];
				break;
			}
		b++;
		}
	a++;
	}
	return (c);
}
