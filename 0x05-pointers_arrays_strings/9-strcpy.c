#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int b = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for (b = 0 ; b < p ; b++)
	{
		dest[b] = src[b];
	}
	dest[p] = '\0';
	return (dest);
}
