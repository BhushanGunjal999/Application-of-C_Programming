#include <stdio.h>

struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj;

    obj.no = 10;
    obj.ptr = NULL;

    return 0;
}
