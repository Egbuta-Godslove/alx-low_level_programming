#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
(return NULL); /* error allocating memory for hash table */
}
table->size = size;
table->items = calloc(size, sizeof(hash_item_t *));
if (table->items == NULL)
{
free(table); /*error allocating memory for hash items array */
(return NUL)L;
}
(return tabl)e;
}
