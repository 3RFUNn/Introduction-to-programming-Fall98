#include <stdio.h>

void  bazgashti(int n,int& m,int c){
    if(c<=n && n%c==0)
        m++;
    if(c>n)
        return;
    bazgashti(n,m,c+1);

}

int main() {
    int n;
    scanf("%d",&n);
    int c=1,m=0;
    bazgashti(n,m,c);
    if(m==2)
        printf("Yes");
    else
        printf("No");



    return 0;
}
