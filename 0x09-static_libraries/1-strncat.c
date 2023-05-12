#include "main.h"
/**
 * _strncat - appends the src string to the dest string using
 * at most n butes from src
 * @dest: string
 * @src: string
 * @n: number of byte
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *b = dest;
	int i = 0;

	while (*b != '\0')
	{
		b++;
	}

	while (*src != '\0' && i < n)
	{
		*b = *src;
		b++;
		src++;
		i++;
	}
	*b = '\0';
	return (dest);
}
