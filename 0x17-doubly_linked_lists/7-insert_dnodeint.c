#include "lists.h"
/**
 * dlistint_len - check the code
 * @h: main function.
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * insert_dnodeint_at_index - main function.
 * @h: param1.
 * @idx: param2.
 * @n: param3.
 * Return: adress of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int i = 0;
	size_t len = dlistint_len(*h);
	dlistint_t *temp = *h;
	dlistint_t *new_node;

	if (*h == NULL || idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	if (idx == len)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	if (len < idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
