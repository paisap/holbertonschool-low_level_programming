/**
 * flip_bits - function that draws a straight line in the terminal.
 * @n: The number to be checked
 * @m: the number to be checked
 * Return: changes necesaries
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = 0;

	t = n ^ m;

	while (t > 0)
	{
		if ((aux & 1) == 1)
			c++;
		aux = aux >> 1;
	}
	return (c);
}
