#include "main.h"
/**
 * reverse_array - reverses the content of an array of integer
 * @a: array
 * @n: integer
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int b, p, temp;

	for (b = 0, p = n - 1; b < p; b++, p--)
	{
		temp = a[b];
		a[b] = a[p];
		a[p] = temp;
	}
}
