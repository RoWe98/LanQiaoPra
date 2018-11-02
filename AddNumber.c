#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n;
    long long num;
    scanf("%d",&n);
    num = n;
    printf("%lld\n",num+num*(num-1)/2);
    return 0;
}