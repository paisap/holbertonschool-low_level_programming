#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - writes the character c to stdout
 * @head: The character to print
 * @str: name
 *
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int i = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	while (str[i] != '\0')
		i++;
	tmp->len = i;
	tmp->next = *head;
	*head = tmp;
	return (tmp);

}
