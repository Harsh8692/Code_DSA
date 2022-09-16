#include <stdio.h>

int main(){
    // do while loop
    
    int num, index = 0;
    printf("Enter a number \n");
    scanf("%d", &num);
    do{
        index += 1;
        printf("%d\n", index);
    }while( index < num);
    
    // while loop
    return 0;
}