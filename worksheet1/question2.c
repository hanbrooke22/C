#include <stdio.h>

int main(){

    int num1, num2, sum;

    printf("Please enter number 1: ");
    scanf("%d", &num1);
    printf("Please enter number 2: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}