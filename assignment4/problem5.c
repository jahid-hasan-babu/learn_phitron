#include <stdio.h>
#include <stdlib.h>
int main()
{

int n;
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    int t;
    scanf("%d", &t);
    int a[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[t];

    for (int i = 0; i < t; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    int c[t];
    for (int i = 0; i < t; i++)
    {
        c[i] = a[i] - b[i];
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d ", abs(c[i]));
    }
    printf("\n");
}


    return 0;
}