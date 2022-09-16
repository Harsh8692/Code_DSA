#include <stdio.h>
// calculating gcd of two numbers
int gcd(int x, int y){
    for (int i = x; i >0; i--)
    {
        if(x%i == 0 && y%i == 0){
            return i;
        }
    }
    
}
int main() {
    int a,b;
    printf("First number:\n");
    scanf("%d",&a);
    printf("Second number:\n");
    scanf("%d",&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}