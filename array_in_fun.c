#include <stdio.h>
void func1(int array1[]){
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of array is %d\n",i,array1[i]);
    }  
}
void func2(int *array2){
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of array is %d\n",i,*(array2+i));
    } 
}
void func3(int array3[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value of %d, %d element of the arary is %d\n", i,j,array3[i][j]);
        }
        
    }
    
}
int main() {
    int arr1[]={1,2,3,4};
    int arr2[]={23,4,5,32};
    int arr3[][2]={{1,2},{3,4}};
    // func1(arr1);
    // func2(arr2);
    func3(arr3);
    return 0;
}