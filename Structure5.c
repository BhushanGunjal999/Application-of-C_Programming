#include <stdio.h>

struct Demo
{
   int i;
   int j;
   int Arr[4];

};

int main()
{
    struct Demo obj;

    obj.i = 10;
    obj.j = 20;

    obj.Arr[0] = 11;
    obj.Arr[1] = 21;
    obj.Arr[2] = 31;
    obj.Arr[3] = 41;

    return 0;
}