#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of  arguments passed to the function.
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	int p = 0;
	char *st, *sp = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					st = va_arg(list, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sp, st);
					break;
				default:
					p++;
					continue;
			}
			sp = ", ";
			p++;
		}
	}
	printf("\n");
	va_end(list);
}
