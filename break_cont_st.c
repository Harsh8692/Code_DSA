#include <stdio.h>

int main()
{
    for (int i=0; i<10; i++){
        int age;
        printf("%d Enter your age \n", i);
        scanf("%d", &age);
        // if (age > 10){
        //     break;
        // }
        if ( age > 10){
            continue;
        }
        printf("There is no continue statement so far in this program");
        printf("There is no continue statement so far in this program");
        printf("There is no continue statement so far in this program");
    }
    return 0;
}
