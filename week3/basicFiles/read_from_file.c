#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main() {
    char* filename = "data.txt";
    FILE *file = open_file(filename, "r");
    

    int buffer_size = 100; //length of line going to read in 
    char line_buffer[buffer_size]; //string which will hold each line as read in 

    while (fgets(line_buffer, buffer_size, file) != NULL) { // while still data in the file 
        printf("%d\n", atoi(line_buffer)); //print it as an integer
    }

    fclose(file);
    return 0;
}