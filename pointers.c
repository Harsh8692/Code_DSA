# include <stdio.h>

int main()
{
    int a = 87;
    int* ptra = &a;
    int *ptr2 =NULL;
    printf("The address of ptra pointer is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra); 
    return 0;
}
