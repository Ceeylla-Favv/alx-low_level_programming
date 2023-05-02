#include "main.h"
/**
 * _atoi - a function that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int p, r, i, length, c, num;

	p = 0;
	r = 0;
	i = 0;
	length = 0;
	c = 0;
	num = 0;
	while (s[length] != '\0')
		length++;
	while (p < length && c == 0)
	{
		if (s[p] == '-')
			++r;
		if (s[p] >= '0' && s[p] <= '9')
		{
			num = s[p] - '0';
			if (r % 2)
				num = -num;
			i = i * 10 + num;
			c = 1;
			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			c = 0;
		}
		p++;
	}
	if (c == 0)
		return (0);
	return (i);
}
