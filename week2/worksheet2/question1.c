#include <stdio.h>

float circleArea(float radius){

    float area;
    area = (3.1415 * radius * radius); 

    return area;
}

int main(){

    float radius, area; 

    printf("Please enter the radius: ");
    scanf("%f", &radius); 

    area = circleArea(radius);

    printf("The area of the circle is %g\n", area); 

    return 0;
}