#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
/**
 * struct forma - nar.
 * @op: validator
 * @f: function
 *
 * Description: Longer description
 */
struct forma
{
	char op;
	void (*f)(va_list);
} form;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
