#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p, b, c;
	int coins[] = {25, 10, 5, 2, 1};

	c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	if (p < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b > 5 && c >= 0; b++)
	{
		while (c >= coins[b])
		{
			c++;
			p -= coins[b];
		}
	}
	printf("%d\n", c);
	return (0);
}
