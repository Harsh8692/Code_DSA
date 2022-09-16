#include <stdio.h>
void printStr(char str[]){
    int i = 0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main() {
    char str1[] = {'1','2','3','\0'};
    // char dt[9];
    // dt = "harsh"; //error : expression must be a modifiable one.
    // char str[34];
    // gets(str);
    // printf("Using printf string is %s\n",str);
    // printf("Using custom function printStr ");
    // printStr(str);
    // printf("Using puts ");
    // puts(str);
    printf("%s",str1);
    return 0;
}