#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 0x1ffff;
    printf("%hx\n",(unsigned short)i);
    return 0;

}
