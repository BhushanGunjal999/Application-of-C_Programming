#include <stdio.h>

struct Demo
{
   int i;
   int j;
   
};

int main()
{
    struct Demo Arr[4];

    Arr[0].i = 10;
    Arr[0].j = 20;

    Arr[1].i = 30;
    Arr[1].j = 40;

    Arr[2].i = 50;
    Arr[2].j = 60;

    Arr[3].i = 70;
    Arr[3].j = 80;

    return 0;
}