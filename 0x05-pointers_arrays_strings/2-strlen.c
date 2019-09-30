/**
 * _strlen -  function
 * @s: The number to be checked
 *
 * Return: returns the length of a string.
 */
int _strlen(char *s)
{
	int contador;

	while (s[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}
