#include <stdio.h>
void print(void)__attribute__((constructor));
/**
 * print - function that prints a sentence
 * before the main function iss executed
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
