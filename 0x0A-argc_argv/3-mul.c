#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p, b, c;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	b = atoi(argv[2]);
	c = p * b;

	printf("%d\n", c);
	return (0);
}
