#include <stdio.h>
int string_to_number(char *s);
#define N 100
int main(int argc, const char *argv[])
{   
    int i;
    int number = 0;
    char str[N];
    printf("input numbers:\n");
    for (i = 0; i < N; i++) 
    {
        scanf("%s",str);
        
    }
    string_to_number(str);
    if (number = -1) 
    {
        printf("No number\n");
    }
    else
    {
        printf("number =%d\n",number);
    }
    return 0;
    
}
int string_to_number(char *s)
{
    int number = 0;
    if((*s >= '0')&&(*s <= '9'))
    {
        number = (*s-0x30);
        s++;
        while ((*s >= '0')&&(*s <= '9'))
        {
            number *= 10;
            number += (*s-0x30);
            s++;
        }
    }
    else
    {
    return -1;
    }
}
