#include <stdio.h>
#include <stdlib.h>
void init_array(int p[],int n);
void ysf_huan(int p[],int n,int m);

int main(int argc, const char *argv[])
{
    int n = 0;
    int m = 0;
    printf("plz input the total number:\n");
    scanf("%d", &n);
    int *array = malloc(sizeof(int) * n);
    printf("plz input the death number:\n");
    scanf("%d",&m);
    printf("result:\n");
    init_array(array,n);
    ysf_huan(array,n,m);
    free(array);
    return 0;
}
void init_array(int p[],int n)
{   
    int i = 0;
    for (i = 0; i < n; i++) 
    {
        p[i] = 1;
    }
}
void ysf_huan(int p[],int n,int m)
{
    int total_number = 0;
    int out_number = 0;
    int i = 0;
    while (total_number < n)
    {
            if (p[i] == 1) 
            {   
                out_number++;
                    if (out_number == m) 
                {
                    total_number++;
                    p[i] = 0;
                    out_number = 0;
                    printf(" %4d (out)\n",(i+1));
                }
                    else 
                    {
                    printf("%4d",(i+1));
                    }
            }
            i++;
            if (i == n)
            {
            i = 0;
            }
    }
}      
