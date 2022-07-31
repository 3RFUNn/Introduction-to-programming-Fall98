#include <stdio.h>

int main() {
    char a , b ;
    scanf("%c %c " , &a , &b);
    char value = a>b ? b : a ;
    printf("\"%c\" -> code = %d \n", value, value);
    return 0;
}