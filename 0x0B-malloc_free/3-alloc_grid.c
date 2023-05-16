#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that turns a pointer to
 * a two dimensional arrayof integers
 * @width: width
 * @height: height
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr, p, b;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (p = 0; p < height; p++)
	{
		arr[p] = (int *) malloc(sizeof(int) * width);
		if (arr[p] == NULL)
		{
			free(arr);
			for (b = 0; b <= p; b++)
				free(arr[b]);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
	{
		for (b = 0; b < width; b++)
		{
			arr[p][b] = 0;
		}
	}
	return (arr);
}
