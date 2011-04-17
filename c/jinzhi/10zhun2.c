#include <stdio.h>

int main(int argc, const char *argv[])
{
    int d = 0;
    int i = 0;
    puts("please input a number:");
    scanf("%d",&d);
    puts("result:");
    for (i = 31; i >= 0; i--) 
    {
        printf("%d",((d>>i)& 0x01));
        

    }
    printf("\n");
    return 0;
}
