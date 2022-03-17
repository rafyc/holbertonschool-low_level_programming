#include "lists.h"

/**
 * add_node_end - main function
 * list_t: head
 * @head: param
 * @str: param
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *s;

	newlist = malloc(sizeof(list_t));
	if (newlist == 0)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = strlen(str);
	newlist->next = NULL;

	if (*head == NULL)
		*head = newlist;

	else
	{
		s = *head;
		while (s->next != NULL)
		{
			s = s->next;
		}
		s->next = newlist;
	}
	return (newlist);
}
