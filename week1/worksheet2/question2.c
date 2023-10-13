#include <stdio.h>

int main(){ 

    int num[5], count, lower, temp;

    for (count = 0; count <5; count ++){
        num[count] = count * 10 + count; 
    }

    for(lower = 0; lower < 5; lower++){
        temp = num[lower];
        num[lower] = num[(4-lower)];
        num[(4-lower)] = temp;
    }
  
    for(count = 0; count < 5; count ++){
        printf("%d\n", num[count]);
    }

return 0; 

}