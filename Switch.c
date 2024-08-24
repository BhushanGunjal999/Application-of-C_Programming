#include <stdio.h>


int main()
{
   int Std = 0;

   printf("Enter the standard : \n");
   scanf("%d", &Std);

switch (Std)
{
case 1 :
   printf("Your Exam is at 1 pm\n");
    break;

case 2 :
   printf("Your Exam is at 2 pm\n");
    break;

case 3 :
   printf("Your Exam is at 3 pm\n");
    break;

case 4 :
   printf("Your Exam is at 4 pm\n");
    break;            

default:
   printf("Invalid class\n");
    break;
}   
return 0;
}