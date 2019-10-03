/**
 * *leet - function that  concatenates two strings.
 * @c: character validado
 * Return: *char
 */
char *leet(char *c)
{
	int a = 0, b = 0;
	char x[2][10];

	x[0][0] = 'a';
	x[0][1] = 'e';
	x[0][2] = 't';
	x[0][3] = 'l';
	x[0][4] = 'o';
	x[0][5] = 'A';
	x[0][6] = 'E';
	x[0][7] = 'T';
	x[0][8] = 'L';
	x[0][9] = 'O';
	x[1][0] = '4';
	x[1][1] = '3';
	x[1][2] = '7';
	x[1][3] = '1';
	x[1][4] = '0';
	x[1][5] = '4';
	x[1][6] = '3';
	x[1][7] = '7';
	x[1][8] = '1';
	x[1][9] = '0';
	while (c[a] != '\0')
	{
		b = 0;
		while (b < 10)
		{
			if (c[a] == x[0][b])
				c[a] = x[1][b];
			b++;
		}
		a++;
	}
	return (c);
}
