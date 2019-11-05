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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *tmp;
	listint_t *tmp2;
	unsigned int t = 0;

	aux = *head;
	while (aux != NULL)
	{
		if (t < index)
			tmp = aux;
		if (t == index)
		{
			tmp2 = aux;
			free(aux);
			tmp->next = tmp2->next;
			return (1);
		}
		t++;
		aux = aux->next;
	}
	return (-1);
}
