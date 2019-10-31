#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - writes the character c to stdout
 * @head: The character to print
 * @str: name
 *
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *nodo;
	int i = 0;

	nodo = malloc(sizeof(list_t));
	if (nodo == NULL)
		return (NULL);
	nodo->str = strdup(str);
	while (str[i] != '\0')
		i++;
	nodo->len = i;
	nodo->next = NULL;
	if (*head == NULL)
	{
		*head = nodo;
		return (nodo);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = nodo;
	return (nodo);
}
