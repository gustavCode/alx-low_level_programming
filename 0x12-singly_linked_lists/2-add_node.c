#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a node at the beginning of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: string to be add to the list_t list
 *
 * Return: NULL if failed, or address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int lenght;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (lenght = 0; str[lenght];)
		lenght++;

	new_node->str = duplicate;
	new_node->len = lenght;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
