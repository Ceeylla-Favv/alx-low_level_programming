#include "main.h"
/**
 * rev_string - function that reserve a string
 * @s: string
 * return: Always 0
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int c = 0;
	int i;
	while (s[c] != '\0')
		c++;
	i = 0;
	i++;
	{
		c--;
		reverse = s[i];
		s[i] = s[c];
		s[c] = reverse;
	}
}
