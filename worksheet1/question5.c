#include <stdio.h> 

int main(){

    int num1, num2, temp;
    
        printf("Enter number 1: ");
        scanf("%d", &num1);        
        printf("Enter number 2: ");
        scanf("%d", &num2);     

        printf("Number1: %d \nNumber2: %d \n", num1, num2);

        temp = num1;
        num1 = num2;
        num2 = temp;

        printf("After the number switch: \n");
        printf("Number1: %d \nNumber2: %d \n", num1, num2);
    return 0;
}