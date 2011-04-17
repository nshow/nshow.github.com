#include <stdio.h>

int main(int argc, const char *argv[])
{
    int d = 0;
    int i = 0;
    int j = sizeof(int)*8-4;
    int t = 0;
    printf("put in a number:\n");
    scanf("%d",&d);
    for (i = 0; i < sizeof(int)*2; i++,j -= 4) 
    {
        if ((0x0f&(d>>j))<= 9 )
        {
            printf("%d",(0x0f&(d>>j)));
        }
        else 
        {   t=(0x0f&(d>>j));
            switch (t)
            {
                case 10: t ='a'; break;
                case 11: t ='b'; break;
                case 12: t ='c'; break;
                case 13: t ='d'; break;
                case 14: t ='e'; break;
                case 15: t ='f'; break;
                default:break; 
            }
                printf("%c",t);
        }
    }
    return 0;
}
