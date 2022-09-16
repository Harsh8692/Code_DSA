#include <stdio.h>
// Union and intersection of numbers in two arrays
int arrUnion(int* arr1, int* arr2){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(arr1+i)==*(arr2+j)){
                printf("%d, ",*(arr1+i));
                *(arr1+i)=0;
            }
            else
            {
                printf("%d, ",*(arr1+i));
                printf("%d, ",*(arr2+j));
                *(arr1+i)=0;
                *(arr2+j)=0;
            }
            
        }
        
    }
    
}
int main() {
    int arr1[]={1,2,3,4};
    int arr2[]={3,4,5,6};
    arrUnion(arr1, arr2);
    return 0;
}