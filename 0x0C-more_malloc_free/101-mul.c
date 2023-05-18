#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ERR_MSG "Error"
/**
 * is_digit - function that checks if a string contains
 * non-digit char
 * @s: string
 * Return: Always 0
 */
int is_digit(char *s)
{
	int p = 0;

	while (s[p])
	{
		if (s[p] < '0' || s[p] > '9')
			return (0);
		p++;
	}
	return (1);
}
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}
/**
 * errors - function that handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - function that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length3, p, carry, num1, num2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length3 = length1 + length2 + 1;
	result = malloc(sizeof(int) * length3);
	if (!result)
		return (1);
	for (p = 0; p <= length1 + length2; p++)
		result[p] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			num2 = s2[length2] - '0';
			carry += result[length1 + length2 + 1] + (num1 * num2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (p = 0; p < length3 - 1; p++)
	{
		if (result[p])
			a = 1;
		if (a)
			_putchar(result[p] + '0');
	}
	if (!a)
		_putchar('\0');
	_putchar('\n');
	free(result);
	return (0);
}
