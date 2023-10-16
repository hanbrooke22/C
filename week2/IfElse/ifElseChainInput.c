#include <stdio.h>

int main() {

    int mark = 101;
    
    while (mark > 100 || mark < 0){
        printf ("Enter the mark: ");
        scanf ("%d", &mark);
    }

    if (mark == 0){
        printf ("The mark of %d is zero\n", mark);
    }
    else if (mark < 40){
        printf ("The mark of %d is a fail\n", mark);
    }
    else if (mark >= 70){
        printf ("The mark of %d is a first\n", mark);
    }
    else if (mark >= 60){
        printf ("The mark of %d is a 2:1\n", mark);
    }
    else{
        printf ("The mark of %d is a pass\n", mark);
    }

    return 0;
}