#include <stdio.h>

void Demo()
{
    static No = 10;
    No ++;
    printf("%d\n",No);
}
int main()
{
    Demo();
    Demo();
    Demo();

    return 0;
}