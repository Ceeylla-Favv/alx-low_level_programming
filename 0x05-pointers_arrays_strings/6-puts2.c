#include "main.h"
/**
 * puts2 - function that prints one character
 * @str: input
 * Return: Always 0
 */
void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
	       p += 2;
	}
	_putchar('\n');
}
