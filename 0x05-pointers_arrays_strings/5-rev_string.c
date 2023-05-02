#include "main.h"
/**
 * rev_string - function that reserve a string
 * @s: string
 * return: Always 0
 */
void rev_string(char *s)
{
	int p;
	int b;
	char str[1000];

	p = 0,
	b = 0;

	while (*(s + p))
	{
		*(str + p) = *(s + p);
		p++;
	}
	p = p - 1;
	while (p >= 0)
	{
		*(s + p) = *(str + b);
		b++;
		p--;
	}
}
