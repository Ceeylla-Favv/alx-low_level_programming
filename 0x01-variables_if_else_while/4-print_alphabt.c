#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int lc = 97;

	while (lc <= 122)
	{
		if (lc == 101 || lc == 113)
		{
			lc++;
			continue;
		}
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
