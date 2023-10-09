#include <stdio.h>

int main(){

    float radius;
    float area; 

    printf("Please enter radius of the circle: ");
    scanf("%f", &radius);

    area = 3.1415 * (radius * radius);

    printf("The area of the circle with the radius %g is %f\n", radius, area);

    return 0;

}