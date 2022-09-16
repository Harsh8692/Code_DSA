#include <stdio.h>

int main()
{   
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age >= 18 ){
        printf("You can vote!");
    }
    else if ( age > 10 ){
        printf("Yor age is between 10 and 18 and you can vote for kids");
    }
    else{
        printf("You can't vote!");
    }
    return 0;
}