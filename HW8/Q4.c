#include <stdio.h>
void enterData(int matrix[50][50], int r, int c) {

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &matrix[i][j]);
}
void transpose(int matrix[50][50],int r,int c,int transpose[50][50]){
    for (int i = 0; i <r ; ++i)
        for (int j = 0; j <c ; ++j)
            transpose[j][i]=matrix[i][j];

}
void multiplyMatrices(int first[50][50], int second[50][50], int mult[50][50], int r1, int c1, int r2, int c2) {

    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j) {
            int sum = 0;
            for (int k = 0; k < c1; ++k)
                sum += first[i][k] * second[k][j];
            mult[i][j]=sum;
        }

    }
void display(int mult[50][50], int r, int c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int first[50][50], second[50][50], mult[50][50], r1, c1, r2, c2;
   int transpose1[50][50],transpose2[50][50];
    scanf("%d%d%d%d", &r1, &c1,&r2,&c2);

   if (r1!=c2){
      printf("Undefined\n");
      return 0;
   }

    enterData(first, r1, c1);
   enterData(second,r2,c2);
   transpose(first,r1,c1,transpose1);
   transpose(second,r2,c2,transpose2);

    multiplyMatrices(transpose1, transpose2, mult, c1, r1, c2, r2);

    display(mult, c1, r2);
    return 0;
}
