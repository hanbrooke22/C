#include <stdio.h>

int main()
{
    // setting up 15 slots of memory for a string
    char name[15];

    // prompt the user
    printf("Hello, please enter your name: ");

    // take the user input, store it in name
    scanf("%s", name);

    // printing out the users name
    printf("Your name is %s\n", name);

    return 0;
}