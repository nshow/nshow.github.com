#include <stdio.h>
#define N 20
int main(int argc, const char *argv[])
{
    int a[N] = {2,1,5,4,2,1,54,42,53,54};
    int i,j,k,n;
    n = N;
    printf("before:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%3d",a[i]);
    }
    printf("\nafter\n");
    for (i = 0; i < n-1; i++) 
    {
        for (k = i+1,j = i+1; j < n; j++) 
        {
            if (a[i] != a[j]) 
            {
                a[k++] = a[j];
            }
        }
        n = k;
    }    
    for (i = 0; i < n; i++) 
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    for (i = 0; i < N; i++) 
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    return 0;
}
