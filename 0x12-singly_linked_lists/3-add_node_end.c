#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: points to the list_t list
 * @str: string
 * Return: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *deb = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (deb->next)
		deb = deb->next;
	deb->next = node;
	return (node);
}
