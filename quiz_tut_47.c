#include <stdio.h>
/*
Use of free() function in the middle of a program

Idea : Removing the common elements of an array o that they appear only once
*/
int main() {
    int n;
    printf("Enter the size of the set you want to create \n");
    scanf("%d",&n);
    int* ptr1 = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d of set\n",i);
        scanf("%d",&ptr1[i]);
    }
    int flag = 0;
    int prev = ptr1[0];
    for (int i = 0; i < n; i++)
    {
        if (ptr1[i]==prev)
        {
            flag = 1;
        }
        
    }
    
    
    return 0;
}