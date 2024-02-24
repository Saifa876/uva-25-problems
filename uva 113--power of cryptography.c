
#include<stdio.h>
#include<math.h>
int main()
{
    double P,n,K;
    while(scanf("%lf %lf", &n, &P) != EOF)
    {
        K=pow(P,(1.0/n));
        printf("%lf\n", K);
    }
    return 0;
}
