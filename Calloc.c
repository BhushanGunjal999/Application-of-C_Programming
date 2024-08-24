#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    int *ptr = NULL;

    printf("Enter Size of Array \n");
    scanf("%d\n",&size);

    ptr = (int *)calloc(sizeof(int) , size);

    free (ptr);
    
    return 0;
}
