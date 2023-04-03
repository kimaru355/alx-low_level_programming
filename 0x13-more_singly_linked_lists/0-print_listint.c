#include "lists.h"

/**
 * print_listint - prints all the elementsin the list.
 * @h: list
 *
 * Return: numbers of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

