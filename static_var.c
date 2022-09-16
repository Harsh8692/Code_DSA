#include <stdio.h>

int func1(int b1)
{
    static int myVar=99;
    printf("The value of myVar is %d\n", myVar);
    myVar++;
    return myVar;
}
int main() {
    int b =34;
    int a = func1(b);
    int* ptr = &a;
    printf("The value of the func1 is %d\n",a);
    a=func1(b);
    printf("The value of the func1 is %d\n",a);
    a=func1(b);
    printf("The value of the func1 is %d\n",a);
    return 0;
}