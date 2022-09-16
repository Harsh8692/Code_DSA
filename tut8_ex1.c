#include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60

*/
int main()
{
    int a;
    printf("Enter the number you want multiplication table of:");
    scanf("%d", &a);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    
    // printf("%d", a);
    // printf(" X 1 = %d\n", a * 1);
    // printf("%d", a);
    // printf(" X 2 = %d\n", a * 2);
    // printf("%d", a);
    // printf(" X 3 = %d\n", a * 3);
    // printf("%d", a);
    // printf(" X 4 = %d\n", a * 4);
    // printf("%d", a);
    // printf(" X 5 = %d\n", a * 5);
    // printf("%d", a);
    // printf(" X 6 = %d\n", a * 6);
    // printf("%d", a);
    // printf(" X 7 = %d\n", a * 7);
    // printf("%d", a);
    // printf(" X 8 = %d\n", a * 8);
    // printf("%d", a);
    // printf(" X 9 = %d\n", a * 9);
    // printf("%d", a);
    // printf(" X 10 = %d\n", a * 10);
    return 0;
}
