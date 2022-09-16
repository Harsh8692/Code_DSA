# include <stdio.h>
int fib_recursive(int n){
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
}
int fib_iterative(int num){
    int a = 1;
    int b = 1;
    for (int i = 2; i < num; i++)
    {
        int c = a;
        a = b;
        b = b+c;
    }
    return b;
}
// Here in this problem of calculating the nth term of fibbonaci series recursion method is a slower than the iterative method.
int main(){
    int num;
    printf("Enter the term you want from the Fibbonaci series\n");
    scanf("%d",&num);
    printf("Using iteration Fibbonaci series %d term is %d\n",num,fib_iterative(42));
    printf("Using recursion Fibbonaci series %d term is %d\n",num,fib_recursive(42));
    return 0;
}