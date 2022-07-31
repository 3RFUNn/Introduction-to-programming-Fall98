#include <stdio.h>

int main() {
    int a , b ,c ;
    scanf("%d %d %d" , &a ,&b ,&c );
    int value1 = a>b ? a : b;
    int value2 = value1>c ? value1 : c;
    int value4 = a<b ? a:b;
    int value5 = value4<c ? value4:c;
    int value3 = value5 + value2;
    printf("%d", value3  );
    return 0;
}