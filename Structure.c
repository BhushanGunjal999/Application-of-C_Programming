#include <stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};


int main()
{
  struct Demo obj1;
  
  //struct Demo obj1 = {10,20.20,30};

  struct Demo *ptr = &obj1;
  
  struct Demo obj2;

obj1.i = 10;
obj1.f = 10.10;
obj1.j = 20;

obj2.i = 50;
obj2.f = 20.20;
obj2.j = 60;

return 0;

}