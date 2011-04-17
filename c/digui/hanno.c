#include <stdio.h>

void hanno (char a,char b, char c, int n);
int main(int argc, const char *argv[])
{
    int n = 0;
    printf("Please input the number:\n");
    scanf("%d",&n);

    hanno('A','B','C',n);
    return 0;
}
void hanno (char a,char b, char c, int n)
{
    if(n == 1)
    {
        printf("%c---->%c\n",a,c);
        return;
    }
    hanno(a,c,b,n-1);
    printf("%c---->%c\n",a,c);
    hanno(b,a,c,n-1);
}
