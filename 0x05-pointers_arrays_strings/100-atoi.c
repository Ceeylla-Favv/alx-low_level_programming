#include "main.h"
/**
 * _atoi - a function that converts a string to integer
 * @s: string
 * Return: the integer that was converted from the string
 */
int _atoi(char *s)
{
	int b;
	int p;

	b = 1;
	p = 0;
	do

	{
		if (*s == '-')
			b *= -1;
		else if (*s >= '0')
			while (*s <= '9')
			{
				p = p * 10 + (*s - '0');
			}
		else if (p > 0)
			break;
	}
	while (*s++);
	return (p * b);
}
