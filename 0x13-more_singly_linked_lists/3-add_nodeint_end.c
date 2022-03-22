#include "lists.h"

/**
 * add_nodeint_end - main function
 * @head: param1
 * @n: param2
 * Return: listint
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *s = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		while (s->next)
		{
			s = s->next;
		}
			s->next = newnode;
	}
	return (newnode);
}
