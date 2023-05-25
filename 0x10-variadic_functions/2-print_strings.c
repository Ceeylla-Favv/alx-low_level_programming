#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - functionn that prints strings,
 * followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function
 * @...: variable number
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int p;

	va_start(strings, n);
	for (p = 0; p < n; p++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (p  != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
