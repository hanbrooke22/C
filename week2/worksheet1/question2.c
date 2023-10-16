#include <stdio.h>

int main(){

    int num, r4, r5;

    printf("Please enter a number: ");
    scanf("%d", &num);

    r4 = num % 4;
    r5 = num % 5;

    if (r4 == 0 && r5 == 0){
        printf("Number is divisble by 4 and 5\n");
    }
    else{
        printf("Number is not divisble by both 4 and 5\n");
    }

return 0;

}