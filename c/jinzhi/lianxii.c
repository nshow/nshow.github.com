#include <stdio.h>
#define N 8
void switch_switchnumber(int d,int j,int n,int mask);
void switch_ifnumber(int d,int j,int n,int mask);
void switch_arraynumber(int d,int j,int n,int mask);
int main(int argc, const char *argv[])
{
    int d = 0;
    int j =sizeof(int)*8-4;
    unsigned int mask = 0x0f;
    printf("input a number\n");
    scanf("%d",&d);
    switch_switchnumber(d,j,N,mask);
    switch_ifnumber(d,j,N,mask);
    switch_arraynumber(d,j,N,mask);
    return 0;
}
void switch_arraynumber(int d,int j,int n,int mask)
{
    char array[]="0123456789abcdef";
    int i;
    for (i = 0; i < n; i++,j -= 4) 
    {
        printf("%c",array[(d>>j)&mask]);
        
    }
    printf("\n");
}
void switch_ifnumber(int d,int j,int n,int mask)
{
    int i;
    for (i = 0; i < n; i++,j -= 4) 
    {
        if(((d>>j)&mask) <= 9)
        {
           
            printf("%d",((d>>j)&mask));
        }
        else
        {
            printf("%c",'a'+(((d>>j)&mask)-10));
        }

    }
    printf("\n");
}
void switch_switchnumber(int d,int j,int n,int mask)
{
    int i;
    for (i = 0; i < n; i++,j -= 4) 
    {
        if(((d>>j)&mask) <= 9)
        {
            printf("%d",((d>>j)&mask));
        }
        else
        {   
            int t = 0;
            t = ((d>>j)&mask);
            switch(t)
                {
                case 10: t = 'a';break;
                case 11: t = 'b';break;
                case 12: t = 'c';break;
                case 13: t = 'd';break;
                case 14: t = 'e';break;
                case 15: t = 'f';break;
                default:break;
                }
                printf("%c",t);
        }

    }
    printf("\n");
}
