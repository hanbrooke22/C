#include <stdio.h> 

int main(){ 

    double distance; 
    float days; 

    printf("Please enter the number of days: ");
    scanf("%f", &days);

    distance = days * (16094799105.22548294);

    printf("In %g days the distance travelled is %f \n", days, distance);

    return 0;

}