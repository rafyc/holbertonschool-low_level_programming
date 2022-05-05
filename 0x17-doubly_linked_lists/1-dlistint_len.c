/**
 * dlistint_len - check the code
 * @h: main function.
 * Return: Always EXIT_SUCCESS.
 */

#include "lists.h"

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
