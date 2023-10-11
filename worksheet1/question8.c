#include <stdio.h> 

int main(){

    int count, total = 1, number;

    printf("Please enter number: ");
    scanf("%d", &number);

    count = number;

    while (count > 0){
        total = total * count;
        count = count - 1;
    }

    printf("The factorial of %d is %d \n", number, total);

    return 0; 
}