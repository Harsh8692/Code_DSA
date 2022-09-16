#include <stdio.h>
#define PI 3.14
int main()
{
    int a, b;
    a = 34;
    b = -7;
    const float c = 6.34;
    // PI = 7.44; // can not do this since PI is a constant
    // c = 8.99; // can not do this since c is a constant
    // printf("a + b = %d\n",  a+b);
    // printf("a - b = %d\n", a - b);
    // printf("a / b = %d\n", a / b);
    // printf("a * b = %d\n", a * b);
    // printf("a %% b = %d\n", a % b);
    // printf("%f\n", c);

    // printf("a + c = %f\n", a + c);
    // printf("a - c = %f\n", a - c);
    // printf("a / c = %f\n", a / c);
    // printf("a * c = %f\n", a * c);
    /*printf("a %% c = %f\n", a % c);
    // Above line has error because % operator must give integral type output.*/
    return 0;
}
// %% prints the symbol %
