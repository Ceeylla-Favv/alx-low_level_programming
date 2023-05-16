#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int p = 0, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	copy = malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
		return (NULL);
	while ((copy[p] = str[p]) != '\0')
		p++;
	return (copy);
}
