#include <stdio.h> 
int main(){

    int  input, remainder;

    printf("Please enter a number: ");
    scanf("%d", &input);
        
    remainder = input % 2;
    

    if (remainder == 0) {
        printf("The number is even \n");
    } else{
        printf("The number is odd \n");
    }

    return 0;
}
