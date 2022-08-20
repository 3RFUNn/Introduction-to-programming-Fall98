#include <stdio.h>
int main() {
    char araye[50][50];
    int n;
    scanf("%d",&n);
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            scanf(" %c",&araye[i][j]);
        }

    }

    for (int k = n-1; k >=0 ; k--) {
        for (int i = 0; i <k ; ++i) {
            printf(" ");
        }
        for ( int j = 0; k+j <n; j++) {
            printf("%c ", araye[j][j+k]);

        }
        printf("\n");
    }
    for (int l = 1; l <n ; l++) {
        for (int i = 0; i <l ; ++i) {
            printf(" ");

        }
        for (int j = 0; j+l <n; ++j) {
            printf("%c ", araye[l+j][j]);

        }
        printf("\n");
    }

    return 0;
}

