#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: integer
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int p, b, c;

	b = 0;
	c = 0;
	for (p = 0; p < size; p++)
	{
		b = b + a[p];
		a = a + size;
	}
	a = a - size;
	for (p = 0; p < size; p++)
	{
		c = c + a[p];
		a = a - size;
	}
	printf("%d, %d\n", b, c);
}
