#include <stdio.h>
#include <stdlib.h>

int main() {
    // Use of malloc
    // int n;
    // printf("Enter the length of array needed\n");
    // scanf("%d",&n);
    // int *ptr;
    // ptr = (int*)malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of %d element of the array \n",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of the %d element of the array is %d\n",i+1,ptr[i]);
    // }
    
    // Use of calloc
    int n;
    printf("Enter the length of array needed\n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of the array \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of the %d element of the array is %d\n",i+1,ptr[i]);
    }

    // use of realloc
    printf("Enter the size of the new arary \n");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of the array \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value of the %d element of the array is %d\n",i+1,ptr[i]);
    }
    
    free(ptr);
    return 0;
}