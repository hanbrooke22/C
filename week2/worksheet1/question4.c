#include <stdio.h> 

int main(){ 

    int temp;

    printf("Please enter the temperature: "); 
    scanf("%d", &temp);

    if (temp > -10 && temp < 40){
        printf("Temp is within the range\n");
    }
    else{
        printf("Temp is not in range\n");
    }
    
    return 0; 
}