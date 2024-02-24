
#include<stdio.h>
int main()
{
    int testcase,N,maximum,current,i,j;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++){
        maximum=0;
        scanf("%d",&N);
        while(N--){
        scanf("%d",&current);
        if(maximum<current)
            maximum=current;
        }
        printf("Case %d: %d\n",i,maximum);
    }
    return 0;
}
