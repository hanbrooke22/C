#include <stdio.h>

int main(){

    int integer; 
    float decimal;
    char string; 
    double longint; 

    printf("The size of integer %zu bytes\n", sizeof(integer));
    printf("The size of float %zu bytes\n", sizeof(decimal));
    printf("The size of char %zu bytes\n", sizeof(string));
    printf("The size of double %zu bytes\n", sizeof(longint));

    return 0;

}