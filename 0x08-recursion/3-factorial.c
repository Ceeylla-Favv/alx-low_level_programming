#include "main.h"
/**
 * factorial - functions that returns the factorial of a given number
 * @n: integer
 * Return: factorial of n
 */
int factorial(int n)
{
	int num = n;

	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	num = factorial(n - 1);
	return (n * num);
}

