#include <stdlib.h>
/**
 * print_name - function that  concatenates two strings.
 * @name: The first string.
 * @f: the char.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		name = "";
	(*f)(name);
}
