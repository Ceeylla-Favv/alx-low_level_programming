#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: input
 *Return: Always 0
 */

void puts_half(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
		p++;
	for (p /= 2; str[p] != '\0'; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
