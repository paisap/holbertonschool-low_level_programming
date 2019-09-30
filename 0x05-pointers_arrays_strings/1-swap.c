/**
 * swap_int -  function that checks for a digit (0 through 9).
 * @a: The number to be checked
 * @b: The number to be cahnge
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
