#include <stdio.h>

int main()
{   
    // One dimensional array
    // int marks[10];
    // int sum = 0;
    // printf("Enter the marks of 10 students \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the marks of %d student of the class ",i+1);
    //     scanf("%d",&marks[i]);
    //     sum +=marks[i];
    // }
    // printf("Average marks of the class = %d\n", sum/10);
    
    // two dimensional array 

    // Ex1.
    // int marks[3][4] = {{3,4,5,6},{5,6,7,8},{7,8,9,10}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d\t",marks[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // Ex2.
    // Take elements of a 3 X 3 matrices as input from the user
    int matrix[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            printf("Enter the %d, %d element of the matrix ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
