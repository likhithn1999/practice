#include "stdio.h"
#include "assert.h"


float division(int num1, int num2)
{

    return (float)num1 / num2;
}

int main()
{
  int N1=20, N2=10;
assert(2 == division(N1,N2));
printf("Assert1 is passing \n");

assert(0.5 == division(N1,N2));
printf("Assert2 is passing \n");

return 0;
}