#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a linked list
 * @head: list_t listto be freed
 */
void free_list(list_t *head)
{
	list_t *deb;

	while (head)
	{
		deb = head->next;
		free(head->str);
		free(head);
		head = deb;
	}
}
