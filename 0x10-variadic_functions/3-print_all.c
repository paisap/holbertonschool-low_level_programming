#include <stdio.h>
#include <stdarg.h>
/**
 * p_str - print string
 * @list: list
 */
void p_str(va_list list)
{
	char *b = va_arg(list, char*);

	if (b == NULL)
	{
		printf("(nil)");
		return;
	}
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
 * @...: arguments
 */
void print_all(const char * const format, ...)
{
/**
 * struct form - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
	struct form
	{
		char op;
		void (*f)(va_list);
	};
	struct form ops[] = {
		{'i', p_int},
		{'c', p_char},
		{'f', p_float},
		{'s', p_str}
	};
	int i = 0, j = 0;
	va_list list;

	va_start(list, format);
	while (format[i] != '\0')
	{
		while (j < 4)
		{
			if (ops[j].op == format[i])
			{
				ops[j].f(list);
				j = 5;
				switch (format[i + 1])
				{
					case '\0':
						break;
					default:
						printf(", ");
						break;
				}
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(list);
}
