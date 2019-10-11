/**
 * _isupper - function  that checks for uppercase character.
 * @c: The number to be checked
 *
 * Return: 1 if c is uppercase Returns 0 otherwise
 */
int _isupper(int c)
{
	int x;

	if (c >= 65 && c <= 90)
	{
	x = 1;
	}
	else
	{
	x = 0;
	}
	return (x);
}
