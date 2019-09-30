#include <stdio.h>
/**
 * print_array -  function that takes a pointer to an int
 * @a: The number to be checked
 * @n: The number to be checked
 *
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if((x + 1) == n)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
	}
	printf("\n");
}
