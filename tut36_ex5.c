#include <stdio.h>

void arrayRev(int *arr){
    int j = 6;
    for (int i = 0; i < 7/2 ; i++)
    {   
        {int index = *(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j) = index;
        j--;}
    }
    printf("The reversed array is \n");
    printf("{");
    for (int i = 0; i < 7; i++)
    {   if (i <6)
        {printf("%d, ",*(arr+i));}
        else
        {
            printf("%d",arr[i]);
        }
    }
    printf("}");
    
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    arrayRev(arr);
    return 0;
}
