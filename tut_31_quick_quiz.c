#include <stdio.h>
// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1
void add_sub(int *x, int *y){
    *x = *x + *y;
    *y = *x - 2*(*y);    
}
int main() {
    int a = 4; int b = 3;
    printf("Value of a is %d and b is %d\n",a,b);
    add_sub(&a,&b);
    printf("Value of a is %d and b is %d\n",a,b);
    return 0;
}