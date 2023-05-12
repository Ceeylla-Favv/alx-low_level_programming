#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that add positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p, b, c;

	for (p = 1; p < argc; p++)
	{
		for (b = 0; argv[p][b] != '\0'; b++)
		{
			if (argv[p][b] < '0' || argv[p][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[p]);
	}
	printf("%d\n", c);
	return (0);
}
