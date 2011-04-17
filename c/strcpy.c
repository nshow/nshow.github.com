#include <stdio.h>
#include <string.h>

void find_word(char *s, char *w);

int main(int argc, const char *argv[])
{
    
    char array[]="There is no elevator to success,but only steps There!";
    char array2[]="to";
    find_word(array,array2);
}   
void find_word (char *s, char *w)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (strncmp(s+i,w,strlen(w)) == 0) 
        {
            printf("%d\n",i);
            printf("%s\n",(s+i));
        }
        i++;
    }

}
    
