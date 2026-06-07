#include <stdio.h>

int main(void) {
    int grade[5] = {10, 20, 30, 40, 50};
    
    for(int i=0;i<5;i++)
        printf("grade[%d]=%d\n",i, grade[i]);
    return 0;

}