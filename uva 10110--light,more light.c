
#include<stdio.h>
#include<math.h>
int main()
{
    long int nthB,rt;
    while(scanf("%lld", &nthB) != EOF)
    {
        if(nthB==0)
        {
            break;
        }
        rt=sqrt(nthB);
        if(nthB==rt*rt)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
