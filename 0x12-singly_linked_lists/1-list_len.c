#include "lists.h"

/**
 * list_len - main function
 * @h: first node
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
return (n);
}
