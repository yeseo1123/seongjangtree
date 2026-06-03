#ifndef HASHMAP_H
#define HASHMAP_H

#include "student.h"

#define TABLE_SIZE 100

typedef struct HashNode {
    int key;
    Student* student;
    struct HashNode* next;
} HashNode;

extern HashNode* hashTable[TABLE_SIZE];

int hashFunction(int key);

void insertHash(Student* student);

Student* searchHash(int id);

#endif
