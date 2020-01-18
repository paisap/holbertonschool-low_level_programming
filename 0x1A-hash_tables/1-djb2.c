#include "hash_tables.h"
/**
 * hash_djb2 - function that gets the length of a prefix substring.
 * @str: The first string
 * Return: return code hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
