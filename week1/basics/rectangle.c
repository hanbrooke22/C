#include <stdio.h>

int main(){

    float side1;
    float side2;
    float area;

    printf("Please enter the first side: ");
    scanf("%f", &side1);
    printf("Please enter the second side: ");
    scanf("%f", &side2);

    area = side1 * side2;

    printf("The area is %f\n", area);

    return 0;
}