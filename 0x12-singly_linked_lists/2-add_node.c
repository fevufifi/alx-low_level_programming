#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds the node at the beinning by updating the head pointer.
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;

	return (new);
}
