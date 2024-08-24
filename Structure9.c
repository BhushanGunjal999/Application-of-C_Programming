#include <stdio.h>


struct Hello
{
    int no;
    int x;

    struct Demo
{
    int i;
    float f;
}dobj1,dobj2;

}hobj;

int main()
{
    hobj.no = 10;
    hobj.x = 20;

    hobj.dobj1.i = 30;
    hobj.dobj1.f = 20.20;

    hobj.dobj2.i = 40;
    hobj.dobj2.f = 30.20;

    return 0;
}

