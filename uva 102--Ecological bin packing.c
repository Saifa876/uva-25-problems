
#include<stdio.h>
int main()
{
    int br[3],gr[3],cl[3];
    int m[6];
    int i,minM;
    while(scanf("%d %d %d %d %d %d %d %d %d", &br[0], &gr[0], &cl[0], &br[1], &gr[1], &cl[1], &br[2], &gr[2], &cl[2]) != EOF)
    {
        m[0] = gr[0] + cl[0] + br[1] + gr[1] + br[2] + cl[2];//BCG
        m[1] = gr[0] + cl[0] + br[1] + cl[1] + br[2] + gr[2];//BGC
        m[2] = br[0] + gr[0] + cl[1] + gr[1] + br[2] + cl[2];//CBG
        m[3] = br[0] + gr[0] + br[1] + cl[1] + gr[2] + cl[2];//CGB
        m[4] = br[0] + cl[0] + cl[1] + gr[1] + br[2] + gr[2];//GBC
        m[5] = br[0] + cl[0] + br[1] + gr[1] + gr[2] + cl[2];//GCB

        minM = m[0];
        for(i=1;i<=5;i++)
        {
            if(m[i]<minM)
            {
                minM = m[i];
            }
        }

        if(minM == m[0])      printf("BCG");
        else if(minM == m[1]) printf("BGC");
        else if(minM == m[2]) printf("CBG");
        else if(minM == m[3]) printf("CGB");
        else if(minM == m[4]) printf("GBC");
        else if(minM == m[5]) printf("GCB");

        printf(" %d\n", minM);
    }
    return 0;
}
