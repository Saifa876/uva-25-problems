
#include <stdio.h>
int main()
{
    char a[101][101];
    int c[101][101];
    int n,m,i,j;
    int f=1;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if(n==0 && m==0)
        {
            break;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf(" %c", &a[i][j]);
                c[i][j]=0;
            }
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]=='*')
                {
                    c[i-1][j-1]++;
                    c[i-1][j]++;
                    c[i-1][j+1]++;
                    c[i][j-1]++;
                    c[i][j+1]++;
                    c[i+1][j-1]++;
                    c[i+1][j]++;
                    c[i+1][j+1]++;
                }
            }
        }

        if(f!=1)
        {
            printf("\n");
        }

        printf("Field #%d:\n", f++);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]=='*')
                {
                    printf("*");
                }
                else
                {
                    printf("%d", c[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
