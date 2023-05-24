#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return:returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
