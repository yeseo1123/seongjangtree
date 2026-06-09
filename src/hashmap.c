#include <stdio.h>
#include <stdlib.h>
#include "hashmap.h"

HashNode* hashTable[TABLE_SIZE] = { NULL };

int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

void insertHash(Student student)
{
    int index = hashFunction(student.id);

    HashNode* current = hashTable[index];

    while (current != NULL)
    {
        if (current->key == student.id)
        {
            return;
        }
        current = current->next;
    }

    HashNode* newNode = malloc(sizeof(HashNode));
    if (newNode == NULL)
    {
        return;
    }

    newNode->key = student.id;
    newNode->student = student;
    newNode->next = hashTable[index];

    hashTable[index] = newNode;
}

Student* searchHash(int id)
{
    int index = hashFunction(id);

    HashNode* current = hashTable[index];

    while (current != NULL)
    {
        if (current->key == id)
        {
            return &current->student;
        }
        current = current->next;
    }

    return NULL;
}

int deleteHash(int id)
{
    int index = hashFunction(id);

    HashNode* current = hashTable[index];
    HashNode* prev = NULL;

    while (current != NULL)
    {
        if (current->key == id)
        {
            if (prev == NULL)
            {
                hashTable[index] = current->next;
            }
            else
            {
                prev->next = current->next;
            }

            free(current);
            return 1;
        }

        prev = current;
        current = current->next;
    }

    return 0;
}

void printTable(void)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        HashNode* current = hashTable[i];

        while (current != NULL)
        {
            current = current->next;
        }
    }
}
