 #include "main.h"
/**
 * _strcat - appends the src string to the dest string,
 * overwritting the terminanting null byte at the end of dest,
 * and then adds a terminating null byte
 * @dest: string
 * @src: string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *b = dest;

	while (*b != '\0')
	{
		b++;
	}
	while (*src != '\0')
	{
		*b = *src;
		b++;
		src++;
	}
	*b = '\0';
	return (dest);
}
