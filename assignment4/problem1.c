#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        long long X;
        int A, B, C;
        scanf("%lld %d %d %d", &X, &A,&B, &C);
        
        long long result = (long long)A *B * C; 
        if (result == 0 && X != 0) {
            printf("-1\n"); 
        } else if (result == 0 && X == 0) {
            printf("0\n "); 
        } else if (X % result != 0) {
            printf("-1\n"); 
        } else {
            printf("%lld\n", X / result);
        }
    }
    
    return 0;
}