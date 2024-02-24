
#include<stdio.h>
int main()
{
    int X,Y,a,b,testcase;
    while(scanf("%d", &testcase) !=  EOF)
    {
        scanf("%d %d", &X, &Y);//The coordinates of the division point is (X,Y)
        while(testcase--)
        {
            scanf("%d %d", &a, &b);//The coordinates of a residence is (a,b)
            if(a==X || b==Y)
            {
                printf("divisa\n");
            }
            else if((a-X)>0 && (b-Y)>0)
            {
                printf("NE\n");
            }
            else if((a-X)<0 && (b-Y)>0)
            {
                printf("NO\n");
            }
            else if((a-X)<0 && (b-Y)<0)
            {
                printf("SO\n");
            }
            else if((a-X)>0 && (b-Y)<0)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
