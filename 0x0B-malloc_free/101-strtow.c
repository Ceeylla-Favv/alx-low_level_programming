#include "main.h"
#include <stdlib.h>
/**
 * count_word - helper functions that counts the number
 * of words in a string
 * @s: string
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0, w = 0, c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - function that splits a string into words
 * @str: string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int p, b = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (p = 0; p <= length; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (c)
			{
				end = p;
		tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = p;
	}
	matrix[b] = NULL;
	return (matrix);
}
