#include "lists.h"

/**
 * add_node - main function
 * list_t: head
 * @head: param
 * @str: param
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;

	newlist = malloc(sizeof(list_t));
	if (newlist == 0)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = strlen(str);
	newlist->next = *head;

	*head = newlist;

	return (newlist);
}
