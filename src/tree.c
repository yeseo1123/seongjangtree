#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree.h"

ClassNode* createClass(char* name)
{
    ClassNode* node =
        (ClassNode*)malloc(sizeof(ClassNode));

    if (node == NULL)
    {
        printf("메모리 할당 실패\n");
        return NULL;
    }

    strcpy(node->className, name);

    node->students = NULL;

    node->left = NULL;
    node->right = NULL;

    return node;
}

void insertClass(
    ClassNode** root,
    char* name)
{
    if (*root == NULL)
    {
        *root = createClass(name);
        return;
    }

    if (strcmp(name, (*root)->className) < 0)
    {
        insertClass(&((*root)->left), name);
    }
    else if (strcmp(name, (*root)->className) > 0)
    {
        insertClass(&((*root)->right), name);
    }
}

ClassNode* searchClass(
    ClassNode* root,
    char* name)
{
    if (root == NULL)
        return NULL;

    int cmp =
        strcmp(name, root->className);

    if (cmp == 0)
        return root;

    if (cmp < 0)
        return searchClass(
            root->left,
            name);

    return searchClass(
        root->right,
        name);
}

void inorderClass(
    ClassNode* root)
{
    if (root == NULL)
        return;

    inorderClass(root->left);

    printf("%s\n",
        root->className);

    inorderClass(root->right);
}

void addStudent(
    ClassNode* classNode,
    Student* student)
{
    if (classNode == NULL ||
        student == NULL)
        return;

    student->next =
        classNode->students;

    classNode->students =
        student;
}

float calculateClassAverage(
    ClassNode* classNode)
{
    if (classNode == NULL)
        return 0;

    Student* current =
        classNode->students;

    float sum = 0;
    int count = 0;

    while (current != NULL)
    {
        sum += current->average;

        count++;

        current = current->next;
    }

    if (count == 0)
        return 0;

    return sum / count;
}

void printExcellentStudents(
    ClassNode* classNode)
{
    if (classNode == NULL)
        return;

    Student* current =
        classNode->students;

    printf("\n우수 학생\n");

    while (current != NULL)
    {
        if (current->average >= 80)
        {
            printf(
                "학번:%d 이름:%s 평균:%.2f\n",
                current->id,
                current->name,
                current->average
            );
        }

        current = current->next;
    }
}

void printRiskStudents(
    ClassNode* classNode)
{
    if (classNode == NULL)
        return;

    Student* current =
        classNode->students;

    printf("\n위험 학생\n");

    while (current != NULL)
    {
        if (current->average <= 60)
        {
            printf(
                "학번:%d 이름:%s 평균:%.2f\n",
                current->id,
                current->name,
                current->average
            );
        }

        current = current->next;
    }
}
