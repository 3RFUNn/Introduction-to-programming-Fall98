#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int value = a % 10;
    int value1 = a % 100;
    int value2 = value1 - value;
    int value3 = a % 1000;
    int value4 = value3 - value1;
    int value5 = value * 100 + value2 + value4 / 100;
    printf("%d", value5);
    return 0;
}