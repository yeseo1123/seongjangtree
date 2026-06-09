#include <stdio.h>
#pragma warning(disable:4996)

#include "student.h"
#include "tree.h"
#include "hashmap.h"
#include "menu.h"

int main()
{
    ClassNode* root = NULL;

    insertClass(&root, "1-A");

    int choice;

    while (1)
    {
        showMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int id;
            char name[50];
            int kor, eng, math;

            printf("학번 : ");
            scanf("%d", &id);

            printf("이름 : ");
            scanf("%s", name);

            printf("국어 : ");
            scanf("%d", &kor);

            printf("영어 : ");
            scanf("%d", &eng);

            printf("수학 : ");
            scanf("%d", &math);

            Student* student = createStudent(id, name, kor, eng, math);

            addStudent(root, student);
            insertHash(*student);

            printf("학생 등록 완료\n");
            break;
        }

        case 2:
        {
            int id;

            printf("검색할 학번 : ");
            scanf("%d", &id);

            Student* student = searchHash(id);

            printStudent(student);

            break;
        }

        case 3:
        {
            printf("성적 수정 기능은 추후 구현\n");
            break;
        }

        case 4:
        {
            printf("반 평균 : %.2f\n", calculateClassAverage(root));
            break;
        }

        case 5:
        {
            printExcellentStudents(root);
            break;
        }

        case 6:
        {
            printRiskStudents(root);
            break;
        }

        case 0:
        {
            printf("프로그램 종료\n");
            return 0;
        }

        default:
        {
            printf("잘못된 입력입니다.\n");
            break;
        }
        }
    }

    return 0;
}
