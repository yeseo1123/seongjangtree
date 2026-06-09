#ifndef STUDENT_H
#define STUDENT_H

#define NAME_LEN 50

typedef struct Student {
    int id;
    char name[NAME_LEN];

    int korean;
    int english;
    int math;

    float average;

    struct Student* next;
} Student;

Student* createStudent(
    int id,
    char* name,
    int kor,
    int eng,
    int math);

void printStudent(
    Student* student);

void updateStudentGrades(
    Student* student, int kor, int eng, int math);

#endif
