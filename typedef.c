#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_cahr;
    char name[32];
} std; // std is the alias name for this structure datatype
int main()
{
    typedef int* intPointer;
    intPointer a, b;
    int c = 8;
    a = &c;
    b = &c;
    printf("Address of c is %d",a);
    printf("Address of c is %d",b);
    // typedef unsigned long ul;
    // ul l1, l2, l3;
    // typedef int integer;
    // integer a;
    // a = 8;
    // printf("The value of a is %d\n",a);

    std Harsh;
    Harsh.id = 4;

    Harsh.fav_cahr = 'H';
    printf("Enter the name of the student\n");
    scanf("%s",Harsh.name);
    printf("Value of Harsh's id is %d\n",Harsh.id);
    printf("Value of Harsh's name is %s\n",Harsh.name);
    return 0;
}