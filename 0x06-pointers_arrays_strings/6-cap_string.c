#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
	if (p == 0 || str[p - 1] == ' ' || str[p - 1] == '\t' ||
		str[p - 1] == '\n' || str[p - 1] == ',' ||
		str[p - 1] == ';' || str[p - 1] == '.' ||
		str[p - 1] == '!' || str[p - 1] == '?' ||
		str[p - 1] == '"' || str[p - 1] == '(' ||
		str[p - 1] == ')' || str[p - 1] == '{' ||
		str[p - 1] == '}')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] -= 32;
		}
	}
	}
	return (str);
}
