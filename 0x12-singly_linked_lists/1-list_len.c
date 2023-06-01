#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: points to list_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next !=NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
