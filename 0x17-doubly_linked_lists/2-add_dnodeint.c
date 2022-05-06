/**
 * add_dnodeint - main function
 * @head: param1
 * @n: param2
 * Return: NULL when fail
 */
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}

	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}
