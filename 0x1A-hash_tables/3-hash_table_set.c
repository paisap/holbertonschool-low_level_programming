#include "hash_tables.h"
/**
 * hash_table_set - function that gets the length of a prefix substring.
 * @ht: the hash_table
 * @key: The first string
 * @value: age of dog
 * Return: return dog
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x = 0;
	hash_node_t *new_nodo;

	if (key == NULL || ht == NULL)
		return (0);
	x = key_index((const unsigned char *)key, ht->size);
	if (ht->array[x] == NULL)
		return (0);
	if (ht->array[x] != NULL && strcmp(ht->array[x]->key, key) == 0)
	{
		free(ht->array[x]->value);
		ht->array[x]->value = strdup(value);
		return (1);
	}
	new_nodo = malloc(sizeof(hash_node_t));
	if (new_nodo == NULL)
		return (0);
	new_nodo->value = strdup(value);
	new_nodo->key = strdup(key);
	new_nodo->next = ht->array[x];
	ht->array[x] = new_nodo;
	return (1);
}
