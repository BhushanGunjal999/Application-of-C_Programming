#include <stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    int x;

    struct Demo dobj;
};

int main()
{
    struct Hello hobj;

    hobj.no = 10;
    hobj.x = 20;

    hobj.dobj.i = 30;
    hobj.dobj.f = 20.20;

    return 0;
}

