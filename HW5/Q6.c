#include <stdio.h>

int main() {
    int row,col,space,n;
    scanf("%d",&n);
    for ( row = 1; row<=n ; row++) {
        for ( col = n; col>=row ; col--) {
            printf("*");
        }
        for (space = 2; space<(2*row) ; space++) {
            printf(" ");
        }
        for (col=n;col>=row ; col--) {
            printf("*");
        }
        printf("\n");
    }
    if(n%2==1) {
        for (row = n; row >= 1; row--) {
            for (col = n; col >= row; col--) {
                printf("*");
            }
            for (space = 1; space <= 2 * (row - 1); space++) {
                printf(" ");
            }
            for (col = n; col >= row; col--) {
                printf("*");
            }
            printf("\n");
        }
    }
    if(n%2==0) {
        for (row = n-1; row >= 1; row--) {
            for (col = n; col >= row; col--) {
                printf("*");
            }
            for (space = 1; space <= 2 * (row - 1); space++) {
                printf(" ");
            }
            for (col = n; col >= row; col--) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}