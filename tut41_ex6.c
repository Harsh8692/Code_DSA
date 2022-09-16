#include <stdio.h>

// void parser
int str_len(char* str){
    int i = 0;
    for (; *(str+i)!='\0'; i++){

    }
    return i;
}
void parser(char* code){
    int len = str_len(code);
    int in = 0; //Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if(code[i]=='<'){
            in = 1;
            continue;
        }
        else if(code[i]=='>'){
            in = 0;
            continue;
        }
        if (in == 0)
        {
            code[index]=code[i];
            index++;
        }
        
    }
    code[index]='\0';
    // Removing trailing spaces form the beginning
    
    while (code[0]==' ')
    {
        for(int i = 0; i < str_len(code); i++)
        {
            code[i]=code[i+1];
        }
    }
    
    //Removing trailing spaces from the end
    while (code[str_len(code) -1 ]==' ')
    {
        code[str_len(code) - 1]='\0';
    }
    
    
    
}
int main()
{   
    char htmlCode[]="   <span>  Yes This is to be parsed   </span>   ";
    // printf("Enter the html code to be parsed \n"); 
    // gets(htmlCode);
    char* Code= htmlCode;
    parser(Code);
    printf("The parsed code is ~~%s~~", htmlCode);
    return 0;
}
/*
Input:
<h1> This is a heading </h1> 

Output:
This is a heading

Input:
<span> This is a heading2 </span> 

Output:
This is a heading2
*/
