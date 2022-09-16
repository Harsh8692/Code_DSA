#include <stdio.h>

int armstrong(int r){
    int term;
    int cube=0;
    int original = r;
    for(;8/*true condition*/;){
        term = original % 10;
        original = original / 10;
        cube += term*term*term;
        if (original==0){
            break;
        }
    }
    // printf("%d\n",cube);
    // printf("%d\n",cube == r);
    if (cube == r){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    printf("%d\n", armstrong(371));
    return 0;
}
