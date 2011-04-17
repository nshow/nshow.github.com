#include <stdio.h>

int main(int argc, const char *argv[])
{
    int d = 0;
    int i = 0;
    int j = sizeof(int)*8 - 4;
    char str_h[20]="0123456789abcdef";
    printf("put a number:\n");
    scanf("%d",&d);
    puts("result:");
    for (i = 0; i < sizeof(int)*2; i++, j -= 4 )                                           
    {
        printf("%c",str_h[(d>>j)&0x0f]);
    }
    printf("\n");
    return 0;
}
