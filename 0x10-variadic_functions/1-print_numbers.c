#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string
 * @n: number of integers
 * @...: variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int p;

	va_start(num, n);
	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(num, int));
		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
