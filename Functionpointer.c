#include <stdio.h>

int Addition(int No1 , int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int value1 = 10, value2 = 11;
    int Ret = 0;

    int (*ptr) (int,int);
    ptr = Addition;

    // Ret = Addition(value1 , value2);

    Ret = ptr(value1,value2);

    printf("%d\n",Ret);

    return 0;
}