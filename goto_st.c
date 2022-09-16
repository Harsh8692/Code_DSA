#include <stdio.h>

int main(){
    // label:
    //     printf("We are inside label\n");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("We are at end.");

    // Using goto to exit multiple loops
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int l = 0; l < 8; l++)
        {
            printf("Enter a number(enter 0 to exit)\n");
            scanf("%d",&num);
            if (num == 0){
                goto end;
            }
        }
        
    }
    end:
    return 0;
}