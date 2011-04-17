#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char s[],int i,int j)
{
    char tmp=s[i];
    s[i]=s[i];
    s[j]=tmp;
}
int foo(char*s,int n)
{
    int i,j,len=strlen(s);
    n=n%len;
    for (i = 0,j = len-n; i<j; i++)
        swap(s,i,--j);
    for (i = len-n, j = len; i<j; i++)
        swap(s, i, --j);
    for (i = 0; i < j; i++)
        swap(s, i, --j);
    return 0;
}
int main(int argc, const char *argv[])
{
    char s[]="abcdefg";
    int n = atoi(argv[1]);
    printf("%s\n",s);
    foo(s,n);
    printf("%s\n",s);
    return 0;
}
