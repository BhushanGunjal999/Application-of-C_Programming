#include <stdio.h>


struct Hello
{
    int no;
    int x;

    struct Demo
{
    int i;
    float f;
}dobj;

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

