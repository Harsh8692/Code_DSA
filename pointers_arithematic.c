#include <stdio.h>

int main() {
    // char a = '3';
    // char* ptra = &a;
    
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);

    int arr[]={1,2,3,4,5,6,7,8,9};
    int *array_ptr = arr;
    printf("the address of the first element of arr %d\n",&arr[0]);
    printf("the address of the first element of arr %d\n",arr);
    printf("the address of the second element of arr %d\n",&arr[1]);
    printf("the address of the second element of arr %d\n",arr+1);

    // Value of the elements of an array
    printf("the value of the first element of arr %d\n",arr[0]);
    printf("the value of the first element of arr %d\n",*(&arr[0]));
    printf("the value of the first element of arr %d\n",*arr);
    printf("the value of the second element of arr %d\n",arr[1]);
    printf("the value of the second element of arr %d\n",*(&arr[1]));
    printf("the value of the second element of arr %d\n",*(arr+1));
    array_ptr++;
    // arr++; // this line will through an error since arr is not modifiable.
    return 0;
}