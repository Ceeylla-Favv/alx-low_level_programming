#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * tester - function that recursely tests characters for palindrome
 * @s: string
 * @b: integer
 * @length: length of string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int tester(char *s, int b, int length)
{
	if (*(s + b) != *(s + length - 1))
		return (0);
	if (b >= length)
		return (1);
	return (tester(s, b + 1, length - 1));
}
/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (tester(s, 0, _strlen(s)));
}
