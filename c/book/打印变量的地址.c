#include <stdio.h>

int main(int argc, const char *argv[])
{
    int adda = 1;
    int addb = 2;
    int add( int a,int b)
    {
        int aa = 1;
        int bb = 1;
        static int sta_a = 1;
        printf("<add.c>address static a = 0x%x \n",&sta_a);
        printf("<add.c>static a = %d \n",sta_a);
        return a+b;
    }
    return 0;
}
