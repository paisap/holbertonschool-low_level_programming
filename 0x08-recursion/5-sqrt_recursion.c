/**
 * buscar - function buscar.
 * @n: number
 * @x: number two
 * Return: x
 */
int buscar(int n, int x)
{
	if (x > (n / 2))
		return (-1);
	if ((x * x) == n)
		return (x);
	x++;
	x = buscar(n, x);
	return (x);
}
/**
 * _sqrt_recursion - function that  concatenates two strings.
 * @n: The first string
 * Return: dest
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if ((x * x) == n)
		return (x);
	x = buscar(n, x);
	return (x);
}
