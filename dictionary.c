// Implements a dictionary's functionality
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    return toupper(word[0]) - 65;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    char word[LENGTH + 1];
    int key;
    
    FILE *dict = fopen(dictionary, "r");
    if (dict == NULL)
    {
        return false;
    }
    
    while(fscanf(dict, "%s", word) != EOF)
    {
        // get the hash key of the word by calling the hash function
        key = hash(word);
    }
    
    return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
