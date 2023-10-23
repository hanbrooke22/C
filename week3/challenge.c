#include <stdio.h> 

int main(){ 
    int i = 0, total = 0;
    int numbers[10]; 
    float mean; 

    for(;i < 10; i++){
        printf("Please enter number to add to the array: ");
        scanf("%d", &numbers[i]);
        total += numbers[i];
    }

    mean = total / 10; 
    printf("The mean is: %g\n", mean);

    return 0; 
}