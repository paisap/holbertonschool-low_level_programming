#include <stdio.h>
/**
 * rev_string -  function that takes a pointer to an int
 * @s: The number to be checked
 *
 */
void rev_string(char *s)
{
	int a, b, c;
	char aux1, aux2;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	c = a / 2;
	for (b = 0; a > c ; a--)
	{
		aux1 = s[a];
		aux2 = s[b];
		s[b] = aux1;
		s[a] = aux2;
		b++;
	}

}
