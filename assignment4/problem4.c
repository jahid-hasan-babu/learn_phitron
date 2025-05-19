#include <stdio.h>
#include <math.h>
int main()
{
    int fixValue = 5;
    int n;
    scanf("%d", &n);

    int tree = ceil((float)n / 2);
    
    int sum = tree+fixValue;
    int star=1;
    int space = sum-1;
  
    for (int i = 0; i < sum; i++)
    {
       for (int j = 0; j < space; j++)
       {
          printf(" ");
       }
       for (int k = 0; k < star; k++){
          printf("*");
       }
       star+=2;
       space--;
       printf("\n");
       
    }
    for (int i = 0; i < fixValue; i++)
    {
        for (int j = 0; j < fixValue; j++)
        {
            printf(" ");
        }
        for (int  i = 0; i < n; i++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    

    
    
    return 0;
}