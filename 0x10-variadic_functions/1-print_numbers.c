#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - num print nline
 * @separator: string
 * @n: numb pass
 * @...: numb value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int ind;

	va_start(num, n);
	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(num, int));
		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
