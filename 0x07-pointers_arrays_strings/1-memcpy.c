#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area
 * src to memory area dest
 * @n: number of bytes
 * @src: memory area to be copied
 * @dest: memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (p);
}
