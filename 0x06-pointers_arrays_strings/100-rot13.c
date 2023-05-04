#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: string
 */
char *rot13(char *str)
{
	int p, b;
	char alpha[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_map[] =
	"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (p = 0; str[p] != '\0'; p++)
	{
		for (b = 0; b < 52; b++)
	{
		if (str[p] == alpha[b])
		{
			str[p] = rot13_map[b];
			break;
		}
	}
	}
	return (str);
}
