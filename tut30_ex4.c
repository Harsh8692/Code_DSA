#include <stdio.h>
/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern

*****
****
***
**
* -> Reversed triangular star pattern

*/
void tria_star(int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < i+1; j++)
       {
        printf("*");
       }
        printf("\n");
    }
}
void reverse_tria_star(int n){
    for (int i = n; i > 0; i--)
    {
       for (int j = 0; j < i; j++)
       {
        printf("*");
       }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows you want in the Triangular star pattern \n");
    scanf("%d",&n);
    tria_star(n);
    printf("\n\n");
    int m;
    printf("Enter the number of rows you want in the Reversed triangular star pattern \n");
    scanf("%d",&m);
    reverse_tria_star(m);
    return 0;
}