#ifndef HASHMAP_H
#define HASHMAP_H

#include "student.h"

#define TABLE_SIZE 10

typedef struct HashNode {
    int key;
    Student student;
    struct HashNode* next;
} HashNode;

void insertHash(Student student);
Student* searchHash(int id);
int deleteHash(int id);
void printTable(void);

#endif
