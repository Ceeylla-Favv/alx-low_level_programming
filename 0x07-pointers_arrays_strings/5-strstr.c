#include "main.h"
/**
 * _strstr - function finds the first occurrence of the
 * substring needle in the string haystack
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int p;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		p = 0;
		if (haystack[p] == needle[p])
	{
		do

		{
		if (needle[p + 1] == '\0')
			return (haystack);
		p++;
	}
		while (haystack[p] == needle[p]);
	}
	haystack++;
	}
	return ('\0');
}
