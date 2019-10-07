/**
 * *_strstr- function that locates a substring.
 * @haystack: The first string
 * @needle: The string concatenates
 * Return: dest
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, b = 0;

	
	while (haystack[x])
	{
		if(haystack[x] == needle[b])
		{
			x++;
			c++;
			b++;
		}
		else
			x++;
	}
}
