#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: string1
 * @s2: string2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
}
