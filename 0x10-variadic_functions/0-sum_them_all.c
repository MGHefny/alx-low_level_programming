#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum paramters
 * @n: paramter pass
 * @...: sum calc
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int x;
	unsigned int s = 0;

	va_start(a, n);
	for (x = 0; x < n; x++)
		s += va_arg(a, int);

	va_end(a);
	return (s);
}
