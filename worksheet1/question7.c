#include <stdio.h>

int main (){ 

    float fahrenheit, celsius; 

    printf("Please enter the temperature in fahrenheit: "); 
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32);
    celsius = (celsius * 0.5555555555555555555555555555555); 

    printf("%g fahrenheit in celsius is %g \n", fahrenheit, celsius);

    return 0;

}