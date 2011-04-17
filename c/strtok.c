#include <stdio.h>
#include <string.h>
void str_test(void);
int main(int argc, const char *argv[])
{
    str_test();
    return 0;
}
void str_test(void)
{
    char str[100]="This is only a game!";
    char *p =str;
    printf("%s\n",str);
    printf("%s\n",p);
    
    
    p = strtok(p," ");
        printf("%s\n",p);

    while(p != NULL)
    {
         printf("%s\n",p);
         p = strtok(NULL," ");
       
    }
    printf("%s\n",str);
}
