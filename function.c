#include <stdio.h>

int sum(int a, int b);
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}
int takenumber(){
    int i;
    printf("Enter a number ");
    scanf("%d", &i);
    return i;
}
int yourage(){
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    printf("Entered age is %d", age);
}
int main()
{
    int c = sum(2, 5);
    // printf("Value of c is %d \n", c);
    // printstar(6);
    // int d = takenumber();
    // printf("The value entered is %d",d);
    yourage();
    return 0;
}
int sum(int a, int b){
    return a+b;
}