#include "hash_tables.h"
/**
 * hash_table_get - function that gets the length of a prefix substring.
 * @ht: the hash_table
 * @key: The first string
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;

	if (ht == NULL || !key)
		return (NULL);
	x =  key_index((unsigned char *)key, ht->size);
	if (ht->array[x] == NULL)
		return (NULL);
	return (ht->array[x]->value);
}
