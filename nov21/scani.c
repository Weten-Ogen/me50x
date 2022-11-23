#include <stdio.h>


int main(void)
{
    int a, b , sum;
    printf("Enter a number : ");
    scanf("%lf", &a);
    printf("Enter a Second number : ");
    scanf("%lf", &b);
    sum = a + b;
    printf("%lf + %lf = %lf\n",a,b,sum);

}