#include<stdio.h>
int main()
{
    long long int v,t,d;
    while(scanf("%lld %lld", &v, &t) != EOF)
    {
        d=v*2*t;
        printf("%lld\n",d);
    }
    return 0;
}
