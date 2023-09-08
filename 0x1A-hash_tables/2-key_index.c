/**
 * key_index - return index value
 * @key: the key for the value
 * @size: size of the hash table
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
