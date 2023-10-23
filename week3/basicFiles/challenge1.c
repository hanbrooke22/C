#include <stdio.h> 

int main(){ 

    int amount, i, number, total; 
    float mean; 
    char* filename = "Numbers.txt"; 
    FILE *file = fopen (filename, "w"); 

    if (file == NULL){
    printf("Error opening file");
    return 1; 
    }

    printf("Please enter how many numbers you want to add: ");
    scanf("%d", &amount); 
    
    for(i = 0; i < amount; i++){
        printf("Please enter number: ");
        scanf("%d", &number);
        fprintf(file, "%d\n", number);

        total += number;
    }

    mean = total / amount;
    fprintf(file, "%g\n", mean); 

    return 0; 
}