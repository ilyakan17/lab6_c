#include <stdio.h>
#include <stdlib.h>
 
#define SWAP(t,x,y)\
    ({t temp = x;\
    x = y;\
    y = temp;})
 
int main()
{
    int a = 17,b = 71;
    SWAP(int,a,b);
    printf("a = %d , b = %d\n", a, b);
    float a1 = 1.2345,b1 = 5.4321;
    SWAP(float,a1,b1);
    printf("a1 = %g , b1 = %g\n", a1, b1);
    return 0;
}