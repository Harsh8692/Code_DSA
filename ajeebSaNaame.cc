#include<stdio.h>
int main(){
    char str[50];
    int i=5;
    while(i>2){
        scanf("%[^\n]s",str);
        printf("%s",str);
        i--;
    }
    return 0;
}