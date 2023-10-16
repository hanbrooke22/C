#include <stdio.h>

int main(){

    int grade = 101;

    while (grade > 100 || grade < 0){
        printf("Please enter a grade between 0 and 100 ");
        scanf("%d", &grade);
    }

    if (grade >= 70){
        printf("Mark is a distinction\n");
    }

    else if (grade >= 50){
        printf("Mark is a pass\n");
    }

    else{
        printf("Mark is a fail\n");
    }

    return 0;
}