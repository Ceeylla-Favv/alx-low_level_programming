#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a string
 * @c: character
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
		return (s + p);
	}
	return ('\0');
}
