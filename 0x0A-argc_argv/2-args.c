#include <stdio.h>
/**
 * main - function that prints all arguments it receive
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p > argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
