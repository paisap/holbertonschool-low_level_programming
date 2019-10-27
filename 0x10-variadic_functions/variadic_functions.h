#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct forma - nar.
 * @op: validator
 * @f: function
 *
 * Description: Longer description
 */
typedef struct forma
{
	char op;
	void (*f)(va_list);
} forma_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
