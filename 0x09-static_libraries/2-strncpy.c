#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: input
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *b = dest;
	int c = 0;

	while (*src != '\0' && c < n)
	{
		*b = *src;
		b++;
		src++;
		c++;
	}
	while (c < n)
	{
		*b = '\0';
		b++;
		c++;
	}
	return (dest);
}
