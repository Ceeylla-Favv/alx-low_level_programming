#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line
 * @s: the string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
