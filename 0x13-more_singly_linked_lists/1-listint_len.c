#include "lists.h"

/**
 * print_listint - main function
 * @h: param1
 * Return: size_t type
 */
size_t listint_len(const listint_t *h)

{
	size_t num = 0;


	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
