
#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
    long long int maximum=(a>b)?a:b;
    long long int minimum=(a<b)?a:b;
    printf("%lld\n",(maximum-minimum));
    }
    return 0;
}
