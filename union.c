#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main() {
    union student harsh;
    harsh.id = 4; // id is corrupted 
    harsh.marks = 45; // marks also corrupted
    harsh.fav_char = 'h'; // fav_char also corrupted
    strcpy(harsh.name,"Harsh"); // name not corrupted
    // here only one member of the union is active at once since we  are sharing memory location of largest data member

    printf("The value of id is %d\n",harsh.id);
    printf("The value of marks is %d\n",harsh.marks);
    printf("The value of fav_char is %c\n",harsh.fav_char);
    printf("The value of name is %s\n",harsh.name);
    return 0;
}