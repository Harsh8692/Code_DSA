# include <stdio.h>
/*
Take input from people asking which exams they passed among maths and science and then gift them according to following scheme:
maths and science 45
maths 15
science 15
Output:
print the type of gift you are giving to them.
*/
int main()
{
    int a;
    printf("Enter 1 if you passed maths exam\n");
    printf("Enter 2 if you passed science exam\n");
    printf("Enter 3 if you passed both maths and science exam\n");
    scanf("%d", &a);
    if (a == 3){
        printf("You are getting 45Rs prize");
    }
    else if (a == 1 || a == 2){
        printf("You are getting 15Rs prize");
    }
    else {
        printf("Sorry you won't get prize.");
    }
    return 0;
}

