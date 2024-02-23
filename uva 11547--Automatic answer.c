
#include<stdio.h>
#include<math.h>
int main()
{
    int n,cal,tensDigit,t;
    while(scanf("%d", &t) != EOF)
    {
        while(t--)
        {
            scanf("%d", &n);
            cal=(((((n*567)/9)+7492)*235)/47)-498;
            tensDigit=abs((cal/10)%10);
            printf("%d\n", tensDigit);
        }
    }
    return 0;
}
