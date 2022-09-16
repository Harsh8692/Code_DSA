#include <stdio.h>
#include <string.h>
int main() {
    char s1[6] = "Harsh";
    printf("String length of s1 is %d\n",strlen(s1));
    char s2[]= "Yadav";
    printf("%s\n",strcat(s1,s2));
    printf("String length of s1 is %d\n",strlen(s1));//10
    char s3[] = "Khushi";
    printf("Reversed string s3 is %s\n",strrev(s3));// ihsuhK
    // printf("%s\n",s3);// ihsuhK
    char s4[]="";
    char s5[]="Yadav";
    strcpy(s4,s5);
    printf("The copied value in s4 is %s",s4);
    printf("Comparison parameter of string s2 and s1 %d",strcmp(s2,s1));
    return 0;
}