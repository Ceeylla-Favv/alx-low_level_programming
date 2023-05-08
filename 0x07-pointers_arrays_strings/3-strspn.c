#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment
 * @accept: input
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
	{
		if (*s == accept[p])
		{
			b++;
			break;
		}
		else if (accept[p + 1] == '\0')
		return (b);
	}
	s++;
	}
	return (b);
}
