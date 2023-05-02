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
	for (int p = length - 1; p >= 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
