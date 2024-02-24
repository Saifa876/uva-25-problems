
#include<stdio.h>

int main() {
    int n, s, a[2000], i, j = 1, count;
    double Avg;
    while (scanf("%d",&n) == 1) {
        if (n == 0) break;
        s = 0;
        Avg = 0;
        count = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            s = s + a[i];
        }
        Avg = (double)s / n;
        for (i = 0; i < n; i++) {
            if (a[i] > Avg) {
                count = count + (a[i] - Avg);
            }
        }
        printf("Set #%d\n minimum number of moves %d.\n\n", j, count);
        j++;
    }
    return 0;
}
