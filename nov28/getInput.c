#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0 )
    {
        printf("Enter a new number : ");
        scanf("%d" , &n);
    };
    printf("%d\n", n);
}