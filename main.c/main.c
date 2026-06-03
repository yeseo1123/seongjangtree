#include <stdio.h>

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
            // 학생 등록
            break;

        case 2:
            // 학생 조회
            break;

        case 3:
            // 성적 수정
            break;

        case 4:
            // 평균 계산
            break;

        case 5:
            // 우수 학생 출력
            break;

        case 6:
            // 위험 학생 출력
            break;

        case 0:
            return 0;
        }
    }
}
