#include "lists.h"
/**
 * print_list - print list of strings
 * @h: list head
 * Return: list length
 */
size_t print_list(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
