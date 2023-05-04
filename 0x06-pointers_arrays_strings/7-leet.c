#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: string
 */
char *leet(char *str)
{
	int p, b;
	char leet_map[5][2] = {{'a', '4'}, {'e', '3'},
		{'o', '0'}, {'t', '7'}, {'l', '1'}};

	for (p = 0; str[p] != '\0'; p++)
	{
		for (b = 0; b < 5; b++)
	{
		if (str[p] == leet_map[b][0] ||
		str[p] == leet_map[b][0] - 32)
	{
		str[p] = leet_map[b][1];
	}
	}
	}
	return (str);
}
