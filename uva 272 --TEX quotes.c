
#include<stdio.h>
#include<string.h>
int main()
{
    char c[100022];
    int i,j,n,l,temp=1;
    while(gets(c))
    {
        l=strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i]=='\"' && temp)
            {
                printf("``");
                temp=0;
            }
            else if(c[i]=='\"')
            {
                printf("''");
                temp=1;
            }
            else
            {
                printf("%c",c[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
