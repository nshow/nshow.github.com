#include <stdio.h>
#include <string.h>
#define N 100
int main(int argc, const char *argv[])
{
    char str[N]="    This is the C world   ";
    char *p=str;
    char *s=str;

    while(*s !='\0')
    {
        while(*s == ' ') s++;
        
            *p = *s;

        p++;
        s++;
    }
    *p ='\0';
    printf("len = %d  %s\n",strlen(str),str);
    return 0;

}
