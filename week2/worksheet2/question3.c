#include <stdio.h> 

int str_len(char string){
    int i = 0, c = 0; 

    while (i > 0);{ 
        if (string[i] == "\O" ) {
         i = -1;
        }
        else{
            c = c + 1;
            i = i + 1;
         }
    }

    return c; 
}

int main(){

    char string; 
    int length; 

    printf("Please enter string");
    scanf("%s", string);

    length = str_len(string);

    printf("The string length is %d", length);

    
    return 0; 
}