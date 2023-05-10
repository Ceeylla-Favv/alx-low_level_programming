#include "main.h"
/**
 * prime_number - function that recurses to check if a
 * number is prime number
 * @n: integer
 * @b: integer
 * Return: 1 if the integer is a prime number,
 * otherwise return 0
 */
int prime_number(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
		return (0);
	return (prime_number(n, b - 1));
}
/**
 * is_prime_number - function that checks for a prime number
 * @n: integer
 * Return: 1 if the integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_number(n, n - 1));
}
