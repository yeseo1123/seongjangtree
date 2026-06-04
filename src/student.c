#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"

Student* createStudent(
    int id,
    char* name,
    int kor,
    int eng,
    int math)
{
    Student* student =
        (Student*)malloc(sizeof(Student));

    if (student == NULL)
    {
        printf("메모리 할당 실패\n");
        return NULL;
    }

    student->id = id;

    strcpy(student->name, name);

    student->korean = kor;
    student->english = eng;
    student->math = math;

    student->average =
        (kor + eng + math) / 3.0f;

    student->next = NULL;

    return student;
}

void printStudent(
    Student* student)
{
    if (student == NULL)
    {
        printf("학생 정보가 없습니다.\n");
        return;
    }

    printf("\n학생 정보\n");

    printf("학번 : %d\n",
        student->id);

    printf("이름 : %s\n",
        student->name);

    printf("국어 : %d\n",
        student->korean);

    printf("영어 : %d\n",
        student->english);

    printf("수학 : %d\n",
        student->math);

    printf("평균 : %.2f\n",
        student->average);
}
