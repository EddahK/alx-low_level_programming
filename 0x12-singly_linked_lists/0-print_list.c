#include "lists.h"

/**
  * print_list - prints all the elements of a linked list.
  *
  * @h: pointer to first node
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count += 1;
	}
	/*print for the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}
