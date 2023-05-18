#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: bytes
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int p = 0, b = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		str = malloc(sizeof(char) * (length1 + n + 1));
	else
		str = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!str)
		return (NULL);
	while (p < length1)
	{
		str[p] = s1[p];
		p++;
	}
	while (n < length2 && p < (length1 + n))
		str[p++] = s2[b++];
	while (n >= length2 && p < (length1 + length2))
		str[p++] = s2[b++];
	str[p] = '\0';
	return (str);
}
