#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds new node at the beginning of a list_t list
 * @head: points to list_t list
 * @str: new string
 * Return: NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t len = 0;

	if (str == NULL)
		len = 0;
	while (str[len] != '\0')
		len++;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	node->str = strdup(str);
	node->len = len;
	*head = node;
	return (*head);
}
