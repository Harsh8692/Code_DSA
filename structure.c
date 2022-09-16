#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char fullName[];
};
// struct Student harsh,khushi,sahil,kalpana;

int main() {
    struct Student harsh,khushi,sahil,kalpana;
    harsh.id = 1;
    khushi.id = 2;
    sahil.id = 3;
    kalpana.id = 4;
    harsh.marks = 25;
    khushi.marks = 20;
    sahil.marks = 20;
    kalpana.marks=30;
    harsh.fav_char = 'j';
    khushi.fav_char = 'j';
    sahil.fav_char = 'j';
    kalpana.fav_char = 'j';
    // scanf("%s",&harsh.fullName);
    printf("Enter full name of Harsh \n");
    gets(harsh.fullName);
    printf("Full name of Harsh : %s",harsh.fullName);
    // printf("Harsh got %d marks \n",harsh.marks);
    return 0;
}