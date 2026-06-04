#include <stdio.h>
#include <stdlib.h>

#include "hashmap.h"

HashNode* hashTable[TABLE_SIZE] = { NULL };

int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

void insertHash(Student* student)
{
    int index = hashFunction(student->id);

    HashNode* newNode =
        (HashNode*)malloc(sizeof(HashNode));

    if (newNode == NULL)
    {
        printf("메모리 할당 실패\n");
        return;
    }

    newNode->key = student->id;
    newNode->student = student;

    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

Student* searchHash(int id)
{
    int index = hashFunction(id);

    HashNode* current =
        hashTable[index];

    while (current != NULL)
    {
        if (current->key == id)
        {
            return current->student;
        }

        current = current->next;
    }

    return NULL;
}
