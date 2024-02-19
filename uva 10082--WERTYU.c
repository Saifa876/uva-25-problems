
#include<stdio.h>
int main()
{
    char k;
    while(scanf("%c", &k) != EOF)
    {
        if(k=='1')
            printf("`");
        else if(k=='2')
            printf("1");
        else if(k=='3')
            printf("2");
        else if(k=='4')
            printf("3");
        else if(k=='5')
            printf("4");
        else if(k=='6')
            printf("5");
        else if(k=='7')
            printf("6");
        else if(k=='8')
            printf("7");
        else if(k=='9')
            printf("8");
        else if(k=='0')
            printf("9");
        else if(k=='-')
            printf("0");
        else if(k=='=')
            printf("-");
        else if(k=='W')
            printf("Q");
        else if(k=='E')
            printf("W");
        else if(k=='R')
            printf("E");
        else if(k=='T')
            printf("R");
        else if(k=='Y')
            printf("T");
        else if(k=='U')
            printf("Y");
        else if(k=='I')
            printf("U");
        else if(k=='O')
            printf("I");
        else if(k=='P')
            printf("O");
        else if(k=='[')
            printf("P");
        else if(k==']')
            printf("[");
        else if(k=='\\')
            printf("]");
        else if(k=='S')
            printf("A");
        else if(k=='D')
            printf("S");
        else if(k=='F')
            printf("D");
        else if(k=='G')
            printf("F");
        else if(k=='H')
            printf("G");
        else if(k=='J')
            printf("H");
        else if(k=='K')
            printf("J");
        else if(k=='L')
            printf("K");
        else if(k==';')
            printf("L");
        else if(k=='\'')
            printf(";");
        else if(k=='X')
            printf("Z");
        else if(k=='C')
            printf("X");
        else if(k=='V')
            printf("C");
        else if(k=='B')
            printf("V");
        else if(k=='N')
            printf("B");
        else if(k=='M')
            printf("N");
        else if(k==',')
            printf("M");
        else if(k=='.')
            printf(",");
        else if(k=='/')
            printf(".");
        else if(k==' ')
            printf(" ");
        else if(k=='\n')
            printf("\n");
    }
    return 0;
}
