#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int oneFarmer = m1 * d;
        int totalDays = oneFarmer / (m1 + m2);
        int remDays = d - totalDays;

        printf("%d\n", remDays); 
    }

    return 0;
}
