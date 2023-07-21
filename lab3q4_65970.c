#include <stdio.h>
int main() {
        int n;
        int sum = 0, count = 0;
        while( scanf("%d", &n) > 0 && n > 0 ) {
                sum+=n;
                count++;
        }
        printf("Sum = %d\nAvg = %f\n", sum, (double)sum/count);
        return 0;
}