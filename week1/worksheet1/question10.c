#include <stdio.h>

int main(){
    
    float principal, rate, time, interest; 

    printf("Please enter initial amount: ");
    scanf("%f", &principal);
    printf("Please enter the interest rate: ");
    scanf("%f", &rate);
    printf("Please enter the number of days: ");
    scanf("%f", &time);

    interest = principal * rate * time;

    printf("The interest is: %g \n", interest);

    return 0; 
}