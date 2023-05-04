#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int p, e, l;

	p = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		e = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (l = 0; l < 10; l++)
	{
		if (l < e)
		printf("%02x", *(b + p + l));
		else
			printf("  ");
		if (l % 2)
	{
		printf(" ");
	}
	}
		for (l = 0; l < e; l++)
	{
		int t = *(b + p + l);

		if (t < 32 || t > 132)
	{
		t = '.';
	}
		printf("%c", t);
	}
		printf("\n");
		p += 10;
	}
}
