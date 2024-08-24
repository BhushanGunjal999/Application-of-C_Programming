#include <stdio.h>

int main()
{
    int No = 11;
    int *iptr = &No;

    char ch = 'A';
    char *cptr = &ch;

    double d = 89.89;
    double *dptr = &d;

    printf("%d\n", sizeof(iptr));
    printf("%d\n", sizeof(No));
    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(d));

    return 0;
}