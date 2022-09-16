#include <stdio.h>
int searchArray(int array[],int n){
    int present = 0;
    for (int i = 0; i < 6; i++)
    {
        if (array[i]==n)
        {
            printf("Yes %d is present in the array\n",n);
            present+=1;
        }
    }
    if(present==0)  {
        printf("%d is not present in the array",n);
    }
    return 0;
}
int main() {
    int arr[]={1,34,64,0,2,7};
    int a;
    printf("Enter the number you want to search for in the array\n");
    scanf("%d",&a);
    searchArray(arr,a);
    return 0;
}