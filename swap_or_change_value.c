#include <stdio.h>

void changeValue(int *address){
    *address = 5;
}
void swap(int *x, int *y){
    int item = *x;
    *x = *y;
    *y = item;
}
int main() {
    int a = 2;
    printf("Value of a is %d\n",a);
    changeValue(&a);
    printf("Value of a is %d\n",a);
    int b = 9; int c = 6;
    printf("Value of b is %d and c is %d\n",b,c);
    swap(&c, &b);
    printf("Value of b is %d and c is %d\n",b,c);
    return 0;
}