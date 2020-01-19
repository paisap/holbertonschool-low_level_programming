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
	int y = 0;
	hash_node_t *new_nodo;

	if (key == NULL || key[0] == '\0')
		return (0);
	new_nodo = malloc(sizeof(hash_node_t));
	if (new_nodo == NULL)
		return (0);
	while (value[y])
		y++;
	new_nodo->value = malloc(y);
	if (new_nodo->value == NULL)
	{
		free(new_nodo);
		return (0);
	}
	y = 0;
	while (key[y])
		y++;
	new_nodo->key = malloc(y);
	if (new_nodo->key == NULL)
	{
		free(new_nodo->value);
		free(new_nodo);
		return (0);
	}
	strcpy(new_nodo->key, key);
	strcpy(new_nodo->value, value);
	x = key_index((const unsigned char *)key, ht->size);
	if (x > ht->size)
		return (0);
	ht->array[x] = new_nodo;
	return (1);
}
