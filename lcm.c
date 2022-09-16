#include <stdio.h>
int lcm(int num1, int num2)
    {
        for (int i = 1; i <= num2; i++){
            
            int num3 = num1 * i;
            if (num3%num2 == 0){
                return num3;
                break;
            }
        }
    }

int main(){ 
    printf("%d",lcm(9,6));
    return 0;
}

