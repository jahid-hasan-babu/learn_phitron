#include <stdio.h>
int main(){
    int a = 15;
    int b = 2;
    int sum = a + b;
    printf("Summation is = %d \n", sum);
    int mul = a - b;
    printf("Multiplication is = %d \n", mul);
    int multiply = a * b;
    printf("Multiply is = %d \n", multiply);
    int div1 = a / b;
    printf("Division is = %d \n", div1);
    float div2 = a / b;
    printf("Division is = %f \n", div2);
    int mod = a % b;
    printf("Modulus is %d \n", mod);
    return 0;
}