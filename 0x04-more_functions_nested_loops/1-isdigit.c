/**
 * _isdigit -  function that checks for a digit (0 through 9).
 * @c: The number to be checked
 *
 * Return:  1 if c is a digit || 0 otherwise
 */
int _isdigit(int c)
{
	int x;

	if (c >= 48 && c <= 57)
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
