/**
 * _pow_recursion - function that  concatenates two strings.
 * @x: The first string
 * @y: The string concatenates
 * Return: dest
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x = x * _pow_recursion(x, (y - 1));
	return (x);
}
