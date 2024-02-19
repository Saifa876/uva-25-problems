
#include<stdio.h>
int main()
{
   int i,n,s;
   int numOfFarmer,sizeOfFarm,numOfAnimal,friendliness;
   while(scanf("%d", &n) != EOF)
   {
        while(n--)
        {
            s=0;
            scanf("%d", &numOfFarmer);
            for(i=1;i<=numOfFarmer;i++)
            {
                scanf("%d %d %d", &sizeOfFarm, &numOfAnimal, &friendliness);
                s+=(sizeOfFarm*friendliness);
            }
        printf("%d\n", s);
        }
    }
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                0;
}
