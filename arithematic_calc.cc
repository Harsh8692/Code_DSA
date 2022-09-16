#include <stdio.h>

int main(){
    int operand1, operand2;
    char oprtr;
    int error = 0;
    printf("Harsh's Calculator\n");
    printf("Enter the first number: \n");
    scanf("%d", &operand1);
    if (sizeof(operand1)!= sizeof(int))
    {
        printf("Error in input!");
        error+=1;
    }
    if(error == 0)
    {printf("Enter the operation from +,-,*,/:\n");
    scanf(" %c",&oprtr);
    if (sizeof(oprtr)!= sizeof(char))
    {
        printf("Error in input!");
        error+=1;
    }}
    if(error == 0)
    {printf("Enter the second number: \n");
    scanf("%d", &operand2);
    if (sizeof(operand2)!= sizeof(int))
    {
        printf("Error in input!");
        error+=1;
    }}
    if (oprtr=='+')     
    {
        printf("Answer = %f\n",(float)operand1+operand2);
    }
    if (oprtr=='-')     
    {
        printf("Answer = %f\n",(float)operand1-operand2);
    }
    if (oprtr=='*')     
    {
        printf("Answer = %f\n",(float)operand1*operand2);
    }
    if (oprtr=='/')     
    {
        printf("Answer = %f\n",(float)operand1/operand2);
    }
    printf("Bye!");
    return 0;
}