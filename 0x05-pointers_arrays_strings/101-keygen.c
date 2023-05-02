#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mypassword[8];
	int p;
	int c;
	int b;

	c = 0;
	srand(time(NULL));
	for (p = 0; p < 8; p++)
	{
		mypassword[p] = rand() % 78;
		c += (mypassword[p] + '0');
		putchar(mypassword[p] + '0');
		if ((2772 - c) - '0' < 78)
		{
			b = 2772 - c - '0';
			c += b;
			putchar(b + '0');
			break;
		}
	}
	putchar('\n');
	return (0);
}
