/**
 * _strlen_recursion - function that  concatenates two strings.
 * @s: The first string
 * Return: dest
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (s[0] != '\0')
	{
		s = s + 1;
		x++;
		x = x + (_strlen_recursion(s));
	}
	return (x);
}
