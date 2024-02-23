
#include <stdio.h>

int main() {
    int employ1s, employ2s, employ3s, midSal;
    int T,i;
    scanf("%d", &T);
    for (i=1;i<=T;i++)
    {
        scanf("%d %d %d", &employ1s, &employ2s, &employ3s);
        if ((employ1s >= employ2s && employ1s <= employ3s) || (employ1s >= employ3s && employ1s <= employ2s))
            midSal = employ1s;
        else if ((employ2s >= employ1s && employ2s <= employ3s) || (employ2s >= employ3s && employ2s<= employ1s))
            midSal = employ2s;
        else
            midSal = employ3s;
        printf("Case %d: %d\n", i, midSal);
    }
     return 0;
}
