#include "main.h"

/**
 * swap_int - function to swap integers
 * @a: first integer
 * @b: second integer to be swap with first
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
