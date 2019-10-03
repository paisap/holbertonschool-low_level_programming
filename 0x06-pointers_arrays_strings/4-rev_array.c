/**
 * reverse_array - function that  concatenates two strings.
 * @a: The first string
 * @n: The string concatenates
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	c = 0;
	d = n - 1;
	for (b = 0; b < n / 2; b++)
	{
		c = a[d];
		a[d] = a[b];
		a[b] = c;
		d--;
	}
}
