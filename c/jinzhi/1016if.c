#include <stdio.h>
int main(int argc, const char *argv[])
{
    int d = 0;
    int i = 0;
    int j = 0;
    unsigned int mask=0x0f;
    puts("please input a number:");
    scanf("%d",&d);
    puts("result:");
        j = 28;
       for (i = 0; i<8; i++, j-=4)
       {
        if(((d>>j)&mask) < 10)
        printf("%d",((d>>j)&mask));
        else 
        printf("%c",('a'+ (((d>>j)&mask)-10)));
       }
    printf("\n");
    return 0;
}
         

