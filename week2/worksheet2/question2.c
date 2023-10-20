#include <stdio.h>

float sphereVolume(float radius){

    float volume;
    volume = (3.1415 * (4/3) * radius * radius * radius); 

    return volume;
}

int main(){

    float radius, volume; 

    printf("Please enter the radius: ");
    scanf("%f", &radius); 

    volume = sphereVolume(radius);

    printf("The volume of the sphere with a radius of %g is %g\n", radius, volume); 

    return 0;
}