#include <stdio.h>
#include <string.h>

int main(void){
    const char *p = "easy";
    int length  = strlen(p);
    char msg[] = "hello, world";
    
    
    printf("%i\n%i\n", sizeof(msg),strlen(msg));

}