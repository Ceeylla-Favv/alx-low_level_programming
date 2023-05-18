#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int p, size, *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (p = 0; min <= max; p++)
		ptr[p] = min++;
	return (ptr);
}
