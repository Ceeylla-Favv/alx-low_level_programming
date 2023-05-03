#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that print an array
 * @a: array name
 * @n: is the number to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}
	if (p == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
