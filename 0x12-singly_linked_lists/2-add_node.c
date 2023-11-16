#include "lists.h"
/**
 * add_node - creat a new node at the beginning of a list_t list.
 * @head: pointer to a head of list
 * @str: string
 * Return: new head
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s_cpy;
	list_t *newHead;

	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return (NULL);

	if (str)
	{
		s_cpy = strdup(str);
		if (s_cpy == NULL)
		{
			free(newHead);
			return (NULL);
		}
		newHead->str = s_cpy;
		newHead->len = strlen(s_cpy);
	}
	else
	{
		newHead->str = NULL;
		newHead->len = 0;
	}
	newHead->next = (*head);
	return (*head = newHead);
}
