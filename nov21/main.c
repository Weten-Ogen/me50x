#include <stdio.h>
#include <string.h>
int main(void)
{
    int a = 15055;
    int b = 23;
    int c = 54;
    char name[20];
    char last[10] = "Oware";

    strcpy(name,"Marcus");
    strcat(name, " ");
    strcat(name ,last);

    printf("%3.0f\n",a);
    printf("%3d\n",b);
    printf("%3d\n",c);
    printf("Hello %s\n",name );
    printf("%04d\n", 75);
}