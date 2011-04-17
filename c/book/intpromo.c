#include <stdio.h>

int main(int argc, const char *argv[])
{
    void foo(double);
    char c = 60;
    foo(c);

    return 0;
}
void foo(double d)
{
    printf("%f\n",d);
}
