#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * p_str - print string
 * @list: list
 */
void p_str(va_list list)
{
	char *b;
	b = va_arg(list, char *);

	if (b == NULL)
		b = "(nil)";
	printf("%s", b);
}
/**
 * p_float - print float
 * @list: list
 */
void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * p_char - print char
 * @list: list
 */
void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * p_int - print int
 * @list: list
 */
void p_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_all - suma
 * @format: The first string
 *
 */
void print_all(const char * const format, ...)
{
	forma_t ops[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_str},
	};
	int i = 0, j;
	char *sc = "";
	va_list list;

	va_start(list, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op == format[i])
			{
				printf("%s", sc);
				ops[j].f(list);
				sc = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
