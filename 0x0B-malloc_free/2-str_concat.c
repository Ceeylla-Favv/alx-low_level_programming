#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int p = 0, b = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	string = malloc(sizeof(char) * (length1 + length2 + 1));
	if (string == NULL)
	return (NULL);
	if (s1)
	{
	while (p < length1)
	{
	string[p] = s1[p];
	p++;
	}
	}
	if (s2)
	{
		while (p < (length1 + length2))
		{
			string[p] = s2[b];
			p++;
			b++;
		}
	}
	string[p] = '\0';
	return (string);
}
