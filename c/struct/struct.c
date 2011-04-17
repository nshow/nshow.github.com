#include <stdio.h>

typedef struct 
{
    float x;
    float y;
}STU;


STU f(STU z1,STU z2)
{
    z1.x=z1.x+z2.x;
    z1.y=z1.y+z2.y;
    return z1;
};

int main(int argc, const char *argv[])
{
    STU z1={3.0,5.0};
    STU z2={};
    z2=z1;
    STU t={3.0,3.0};
    printf("%f,%f\n",t.x,t.y);
    t= f(z1,z2);
    printf("%f,%f\n",z1.x,z1.y);
    printf("%f,%f\n",z2.x,z2.y);
    printf("%f,%f\n",t.x,t.y);
    printf("%d\n",sizeof(t));
    

    return 0;
}
