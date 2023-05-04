#include "main.h"
/**
 * string_toupper - changes all lowercase letter of a string
 * to uppercase
 * @str: string
 * Return: string
 */
char *string_toupper(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (str[p] >= 'a' && str[p] <= 'z')
	{
		str[p] -= 32;
	}
	}
	return (str);
}
