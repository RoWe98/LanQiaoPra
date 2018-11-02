#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
    int r;
    double PI,s;
    scanf("%d",&r);
    PI = atan(1.0)*4;
    s = PI * r * r;
    printf("%.7f\n",s);
    return 0;
}