#include <stdio.h>

int main()
{
    int No1 = 0;

    printf("Enter the Number : \n");
    scanf("%d",&No1);

    if((No1 % 2 )== 0)
    {
        printf("The Given Number is Even ...\n");
    }
    else
    {
        printf("The Given Number is Odd ...\n");
    }

    return 0;
}