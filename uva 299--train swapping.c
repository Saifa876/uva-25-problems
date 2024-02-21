
#include <stdio.h>
int main()
{
    int N,l,temp,swaps=0;
    int carriages[60];
    int i,j;

    while(scanf("%d", &N) != EOF)
    {
        while(N--)
        {
            swaps=0;
            scanf("%d", &l);
            for (i=0;i<l;i++)
            {
                scanf("%d", &carriages[i]);
            }

            for (i=0;i<(l-1);i++)
            {
                for (j=i+1;j<l;j++)
                {
                    if (carriages[i]>carriages[j])
                    {
                        temp = carriages[i];
                        carriages[i] = carriages[j];
                        carriages[j] = temp;
                        swaps++;
                    }
                }
            }

            printf("Optimal train swapping takes %d swaps.\n", swaps);
        }
    }
    return 0;
}
