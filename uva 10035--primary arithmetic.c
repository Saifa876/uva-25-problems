
#include<stdio.h>
int main()
{
    unsigned long long int n1,n2;
    int carryC,carry;
    while(scanf("%llu %llu", &n1, &n2) != EOF)
    {
        if (n1==0 && n2==0)
        {
            break;
        }
        carryC=0;
        carry=0;
        while (n1>0 || n2>0)
        {
            carry=((n1%10)+(n2%10)+carry)/10;
            n1=n1/10;
            n2=n2/10;
            carryC=carryC+carry;
        }
        if(carryC==0)
        {
            printf("No carry operation.\n");
        }
        else
        {
            printf("%d carry operation%s.\n", carryC, (carryC>1)?"s":"");
        }
    }
    return 0;
}
