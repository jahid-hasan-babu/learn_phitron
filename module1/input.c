#include <stdio.h>

/*int main(){
    int a;
    scanf("%d", &a);
    int b;
    printf("%d", a);
    return 0;
} */

/*int main(){
    long long int a = 100000000000;
    printf("%lld", a);
    return 0;
}*/

// int main(){
//     double f = 1000.545474884;
//     printf("%lf", f);
//     return 0;
// }



int main(){
    int num1;
    scanf("%d", &num1);
    int num2;
    scanf("%d", &num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;  
    printf("%d,%d",num1, num2);
    return 0;
}