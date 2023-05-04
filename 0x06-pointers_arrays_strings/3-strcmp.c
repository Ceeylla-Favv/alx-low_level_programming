#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: string1
 * @s2: string2
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 < *s2)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
