#include <stdio.h> 

int main(){ 

    int n, i; 
    char *filename = "squares.dat";
    FILE* file = fopen(filename, "w");

    printf("Please enter a number: "); 
    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        fprintf(file, "%d\n", i * i);

    }

    fclose(file); 
    return 0; 
}