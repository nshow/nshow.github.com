#include <stdio.h>
#define N 20
int a[N] = {1,3,2,5,7,12,13,1,-9,-7,-18,3};
    int main(int argc,char*argv[])
{
    int min = a[0] < a[1]?a[0]:a[1];
    int secondmin = a[0]<a[1]?a[1]:a[0];
    int i;
    for (i = 0; i < N; i++) 
    {
        printf("%4d",a[i]);
    }
    for (i = 0; i < N; i++) 
        if (a[i] < min) 
        {
            secondmin = min;
            min = a[i];
        }
        else if (a[i] >= min && a[i] < secondmin) 
        {
            secondmin = a[i];
        }
    printf("%d\n",secondmin);    
    return 0;
}
