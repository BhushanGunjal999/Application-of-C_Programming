#include <stdio.h>

int main()
{
    int No1 = 11;
    int *p = NULL;

    p = &No1;

    printf("%d\n", *p);

    return 0;
}