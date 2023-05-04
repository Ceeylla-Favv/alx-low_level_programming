#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int b = 0;
	int e = 0;
	char temp;

	while (*(n + b) != '\0')
	{
		b++;
	}
	b--;
	for (e = 0; e < b; e++, b--)
	{
		temp = *(n + e);
		*(n + e) = *(n + e);
		*(n + e) = temp;
	}
}
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, b = 0, e = 0, num = 0;
	int num1 = 0, num2 = 0, temp_tot = 0;

	while (*(n1 + b) != '\0')
		b++;
	while (*(n2 + e) != '\0')
	e++;
	b--;
	e--;
	if (e >= size_r || b >= size_r)
		return (0);
	while (e >= 0 || b >= 0 || overflow == 1)
	{
		if (b < 0)
			num1 = 0;
		else
			num1 = *(n1 + b) - '0';
		if (e < 0)
			num2 = 0;
		else
			num2 = *(n2 + e) - '0';
		temp_tot = num1 + num2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (temp_tot % 10) + '0';
		num++;
		e--;
		b--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
