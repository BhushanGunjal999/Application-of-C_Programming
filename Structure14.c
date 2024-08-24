#include <stdio.h>

union  Demo
{
    int i;
    double d;
    float f;

};

int main()
{
    union Demo obj;
    printf("%d\n" , sizeof(obj));

    obj.i = 11;
    printf("%d\n", obj.i);

    obj.f = 11.10f;
    printf("%d\n", obj.f);

    return 0;
}
