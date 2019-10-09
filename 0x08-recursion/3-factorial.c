/**
 * factorial - function that  concatenates two strings.
 * @n: The first string
 * Return: dest
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n >= 1)
		n = n * factorial(n - 1);
	return (n);
}
