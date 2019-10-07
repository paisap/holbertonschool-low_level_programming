/**
 * *_strstr- function that locates a substring.
 * @haystack: The first string
 * @needle: The string concatenates
 * Return: dest
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, b = 0, c = 0, t = 0, n = 0;

	while (haystack[x] != '\0' && needle[b] != '\0')
	{
		if (haystack[x] == needle[b])
		{
			if (c == 0)
				t = x;
			x++;
			c++;
			b++;
			n++;
		}
		else
		{
			x++;
			b = 0;
		}
	}
	if (n == c)
		haystack = (haystack + t);
	else
		haystack = 0;
	return (haystack);
	}
