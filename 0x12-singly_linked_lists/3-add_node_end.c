#include "lists.h"
/**
 * add_node_end - creat a new node at the end of a list_t list.
 * @head: list head
 * @str: string reference
 * Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s_cpy;
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str)
	{
		s_cpy = strdup(str);
		if (s_cpy == NULL)
		{
			free(new);
			return (NULL);
		}
		new->str = s_cpy;
		new->len = strlen(s_cpy);
	}
	else
	{
		new->str = NULL;
		new->len = 0;
	}
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp)
		{
			if (temp->next == NULL)
			{
				temp->next = new;
				break;
			}
			else
				temp = temp->next;
		}
	}
	return (new);
}
