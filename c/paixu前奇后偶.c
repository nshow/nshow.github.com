#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[] = {1,2,4,5,6,7,12,34,8,5,9,0};
    int i,j;
    int temp = 0;
    int len =sizeof(a)/sizeof(int);
    j = len - 1;
    for (i = 0; i < len-1; i++) 
    {
        printf("%4d",a[i]);
    }
    printf("\nafter:\n");
    for (i = 0,j = len -1;i < j; i++)
        {
            if(a[i]%2 == 0)
            {
                while (a[j]%2 == 0)
                {
                j--;
                }
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                j--;
            }

        }   
    for (i = 0; i < len-1; i++) 
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    return 0;
}
