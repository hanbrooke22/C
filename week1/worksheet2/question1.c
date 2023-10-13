#include <stdio.h>

int main(){ 

    int num[5], count, total = 0;

    for (count = 0; count <5; count ++){
        num[count] = count * 10 + count; 
    }

    for (count = 0; count <5; count ++){
        total = total + num[count];
    }

    printf("The total is %d \n", total);
return 0; 

}