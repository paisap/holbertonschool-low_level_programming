#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct form - nar.
 * @op: validator
 * @f: function
 *
 * Description: Longer description
 */
struct form
	{
		char op;
		void (*f)(va_list);
};
#endif
