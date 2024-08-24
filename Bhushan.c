#include <stdio.h>

#include "PPA.h"

int main()
{
    struct Demo obj;

    printf("Inside Main...\n");

    printf("Rate if Interest %f\n", ROI);

    printf("Fees of LB Batch %d\n", FEES);

    printf("Size of Demo Structure : %d \n", sizeof(obj));

    return 0;
}