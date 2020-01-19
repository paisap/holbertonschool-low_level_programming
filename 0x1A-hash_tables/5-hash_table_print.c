#include "hash_tables.h"
/**
 * hash_table_print - function that gets the length of a prefix substring.
 * @ht: the hash_table
 * Return: the value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0, t = 0;

	if (ht == NULL)
		printf("{}\n");
	printf("{");
	while (x < ht->size)
	{
		if (t == 1 && ht->array[x] != NULL)
			printf(", ");
		if (ht->array[x] != NULL)
			printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value), t = 1;
		x++;
	}
	printf("}\n");
}
