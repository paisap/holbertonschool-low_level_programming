#include "hash_tables.h"
/**
 * *hash_table_create - function that gets the length of a prefix substring.
 * @size: age of dog
 * Return: return a new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(size * 8);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
