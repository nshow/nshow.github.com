#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[20] = "This is C world!";
    char *p = str;
    char c_str[20];
    char *p_c = c_str;
    int i =0;

    for (p=str; *p != '\0'; p++) 
        {
            printf("%c",*p);
        }  
    printf("\n");

    for (p = str; *p != '\0'; p++) 
        {
         if(*p==' ')
            {
                p++;
            }
         *p_c=*p;  
         p_c++;
         }
    *p_c = '\0';
    printf("%s\n",c_str);

    for (; p >= str; p--) 
    {
        *p=*p_c;
        p_c--;
    }
    printf("%s\n",str);
    printf("%s\n",c_str);

    printf("%d,%d\n",sizeof(p),sizeof(str));
    return 0;
}
