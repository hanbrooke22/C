#include <stdio.h>
#include <stdlib.h>

int main(){

    char *filename = "squares.dat";
    FILE* file = fopen(filename, "r");
    int buffersize = 100, total = 0, count = 0; 
    char lineBuffer[buffersize]; 

    while (fgets(lineBuffer, buffersize, file) != NULL){
        total += ("%d\n", atoi(lineBuffer));
        count++;
    }

    printf("The mean is: %d\n", total / count);

return 0; 
}