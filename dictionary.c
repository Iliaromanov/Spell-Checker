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
    
    // keep reading strings from the dictionary file until reaching end of file
    while(fscanf(dict, "%s", word) != EOF)
    {
        // create a node with the
        node *wordNode = malloc(sizeof(node));
        if (wordNode != NULL)
        {
            strcpy(wordNode->word, word);
            wordNode->next = NULL;
        }
        else
        {
            return false;
        }
        
        // get the hash key of the word by calling the hash function
        key = hash(word);
        
        // if the location at the hash key is empty simply set the hash key to the new word node
        if (table[key] == NULL)
        {
            table[key] = wordNode;
        }
        // else insert the new node to the start of the linked list at the hash key
        else
        {
            wordNode->next = table[key];
            table[key] = wordNode;
        }
    }
    return true;
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
