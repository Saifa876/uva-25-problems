#include<stdio.h>
int main()
{
    int testcase,a,b,i,j,sum;
    scanf("%d", &testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d\n%d", &a, &b);
        sum=0;
        for(j=a;j<=b;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
