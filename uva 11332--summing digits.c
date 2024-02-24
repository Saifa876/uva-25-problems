
#include<stdio.h>
int main()
{
    int n;
    int sum;
    while(scanf("%d",&n) != EOF)
    {
        if(n==0)
        {
            break;
        }
        while(n/10!=0)
        {
            sum=0;
            while(n!=0)
            {
                sum=sum+n%10;
                n=n/10;
            }
            n=sum;
        }
        printf("%d\n",n);
    }
    return 0;
}
