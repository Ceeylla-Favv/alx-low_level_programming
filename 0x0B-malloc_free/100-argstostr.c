#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int p, b, c, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		for (b = 0; av[p][b] != '\0'; b++)
			length++;
	}
	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	c = 0;
	for (p = 0; p < ac; p++)
	{
		for (b = 0; av[p][b] != '\0'; b++)
		{
			str[c] = av[p][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
