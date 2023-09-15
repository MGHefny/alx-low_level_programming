#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print str nline
 * @separator: str print
 * @n: str numb
 * @...: numb value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *st;
	unsigned int ind;

	va_start(str, n);
	for (ind = 0; ind < n; ind++)
	{
		st = va_arg(str, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
