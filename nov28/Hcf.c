#include <stdio.h>

int main(void)
{
    int r,  n , m;
    printf("Enter a number n , m : ");
    scanf("%d %d", &m, &n);
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    printf("HCf is : %d\n" , m);
}