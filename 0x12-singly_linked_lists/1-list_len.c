#include "lists.h"
/**
 * list_len - calculates list len
 * @h: list head
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
