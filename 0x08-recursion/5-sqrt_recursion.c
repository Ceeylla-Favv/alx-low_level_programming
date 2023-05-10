#include "main.h"
/**
 * natural_sqrt - function that recurses the natural square
 * root of a number
 * @n: integer
 * @b: integer
 * Return: natural square root
 */
int natural_sqrt(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (natural_sqrt(n, b + 1));
}
/**
 * _sqrt_recursion - function to return the natural square
 * root of a number
 * @n:integer
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt(n, 0));
}
