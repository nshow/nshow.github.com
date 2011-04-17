#include <stdio.h>

int main(int argc, const char *argv[])
{
    int array[6][6]={10};
    int *p =array[0];
    int (*s)[];
    int  **ptr;
    int *x[10];
    
    ptr = array;
    ptr = x; 

    s=array;

    int i = 0;
    
    printf("array[0]:%p\n&array[0][0]:%p\n",array[0],&array[0][0]);
    printf("array: %p\n",array);
    printf("*x %p\n",x);
    printf("s %p\n",s);
    printf("ptr %p\n",ptr);
    return 0;
}
