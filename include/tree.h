#ifndef TREE_H
#define TREE_H

#include "student.h"

typedef struct ClassNode {
    char className[50];

    Student* students;

    struct ClassNode* left;
    struct ClassNode* right;
} ClassNode;

ClassNode* createClass(char* name);

void insertClass(
    ClassNode** root,
    char* name);

ClassNode* searchClass(
    ClassNode* root,
    char* name);

void inorderClass(
    ClassNode* root);

void addStudent(
    ClassNode* classNode,
    Student* student);

float calculateClassAverage(
    ClassNode* classNode);

void printExcellentStudents(
    ClassNode* classNode);

void printRiskStudents(
    ClassNode* classNode);

#endif
