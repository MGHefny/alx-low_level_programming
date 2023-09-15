#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print code
 * @format: li argu
 */
void print_all(const char * const format, ...)
{
		int x = 0;
	char *st;
	char *sp = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sp, va_arg(li, char));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(li, double));
					break;
				case 's':
					st = va_arg(li, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sp, st);
					break;
				default:
					x++;
					continue;
			}
			sp = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(li);
}
