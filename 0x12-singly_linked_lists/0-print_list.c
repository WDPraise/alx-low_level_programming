#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
