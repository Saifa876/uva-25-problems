
#include<stdio.h>
#include<string.h>
int main()
{
    int i,f,count=0;
    char c[1000];
    while(gets(c) != NULL)
    {
        for(i=0;c[i]!='\0';i++)
        {
            if((c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z'))
            {
                f=1;
            }
            else
            {
                if(f==1)
                {
                    count++;
                    f=0;
                }
            }
        }
        printf("%d\n", count);
        count=0;
    }
    return 0;
}
