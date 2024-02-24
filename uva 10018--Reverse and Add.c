
#include <stdio.h>
int main()
{
    unsigned long long num,reverseNum,temp;
    int iter,N;
    while(scanf("%d", &N) != EOF)
    {
        while(N--)
        {
            iter=0;
            scanf("%llu", &num);
            while(1)
            {
                temp=num;
                reverseNum=0;
                while(num!=0)
                {
                    reverseNum=reverseNum*10+num%10;
                    num=num/10;
                }
                if(reverseNum==temp)
                {
                    printf("%d %llu\n", iter, reverseNum);
                    break;
                }
                else
                {
                    num=temp+reverseNum;
                    iter++;
                }

            }
        }
    }
    return 0;
}
