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
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *tmp;
	unsigned int t = 0;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	tmp = *head;
	while (tmp != NULL)
	{
		if ( t == idx)
		{
			aux->next = tmp->next;
			tmp->next = aux;
			return (tmp);
		}
		tmp = tmp->next;
		t++;

	}
	return (NULL);
}
