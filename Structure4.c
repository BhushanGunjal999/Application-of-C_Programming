#include <stdio.h>

struct Demo
{
   int i;
   int j;
   int *ip;
   float *fp;
};

int main()
{
    struct Demo obj1;
    int No = 90;
    float f = 50.50;

    obj1.i = 11;
    obj1.j = 21;

    obj1.fp = &f;
    obj1.ip = &No;

    printf("%d\n",No);
    printf("%f\n",f);
    
    printf("%d\n",obj1.ip);
    
    printf("%f\n",obj1.fp);

    return 0;
}