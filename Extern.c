#include <stdio.h>

int A = 10; // Non BSS
int B;      // BSS

extern int C;

int main()
{
    printf("%d",A);
    printf("%d",B);
    printf("%d",C);
    return 0;
}