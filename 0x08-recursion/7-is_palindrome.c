/**
 * isPalindrome - function that  concatenates two strings.
 * @s: The first string
 * @tam: the second
 * @n: the 3
 * @m: 4: 5
 * @r: 6
 * Return: dest
 */
int isPalindrome(char *s, int tam, int n, int m, int r)
{
	if (s[n] == s[tam] && n < m)
	{
		n++;
		tam--;
		r = 1 + isPalindrome(s, tam, n, m, r);
	}
	return (r);
}
/**
 * _lenght - function that  concatenates two strings.
 * @s: The first string
 * Return: dest
 */
int _lenght(char *s)
{
	int t = 0;

	if (*s)
	{
		t++;
		t = t + (_lenght(s + 1));
	}

	return (t);
}
/**
 * is_palindrome - function that  concatenates two strings.
 * @s: The first string
 * Return: dest
 */
int is_palindrome(char *s)
{
	int t = 0, n = 0, m = 0, r = 0;

	t = _lenght(s);
	m = t / 2;
	t = t - 1;
	r = isPalindrome(s, t, n, m, r);
	if (r == m)
		return (1);
	return (0);
}
