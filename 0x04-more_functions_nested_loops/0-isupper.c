#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: number to be checked
 * Return: 1 for upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
