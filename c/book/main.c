#include <stdio.h>
#define MAX 5
#define MIN 0
int globle_var = 0x1234;
const int const_num = 0x9999;
int add(int,int);
int sub(int,int);
int a_out = 10;
int b_out = 20;
int main(int argc, const char *argv[])
{
    int a = 100;
    int b = 200;
    int*p = NULL;
    printf("<main.c>address a = 0x%x \n",&a);
    printf("<main.c>address b = 0x%x \n",&b);
    printf("<main.c>address b_out = 0x%x \n",&b_out);
    printf("<main.c>address a_out = 0x%x \n",&a_out);
    add(a,b);
    *p =123;
    add(a,b);
    printf("sta_a = %d \n",*p);
    return 0;
}
