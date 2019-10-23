/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = *argv[2];
	if (x != 43 || x != 45 || x != 42 || x != 47 || x != 37)
	{
		printf("Error\n");
		exit(99);
	}
	if ((x == 47 && argv[3] == 0) || (x == 37 &&  argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}
}

