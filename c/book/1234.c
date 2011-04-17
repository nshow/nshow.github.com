#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int j;
    int k;
    int count = 0;
    for(i = 1; i <= 4; i++)
        for (j = 1;j  <= 4; j++) 
            for(k =1; k <= 4; k++)
        {
            if(i != j&& j!= k&& k != i)
            {
            count++;
            printf("%d%d%d\n",i,j,k);
            }
        }
    printf("\ncount = %d\n",count);    
    return 0;
}
