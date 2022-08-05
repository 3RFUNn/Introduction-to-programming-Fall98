#include <stdio.h>
int tuss(int tedad,int k,int sum){
    if (tedad==0) {
        return (sum == 0);
    }
    if (tedad>sum || sum<0 || k*tedad<sum) { //shorute avvaliye
        return 0;
    }
    int natije=0;
    for (int j=1;j<=k;j++) {
        natije+=tuss(tedad - 1,k,sum - j); //bazgashti tor
    }
        return natije;

}

int main() {   //code tavasotte khodm zade shode copy nashe!! (ERFAN RFOSK)
    int tedad , sum ,k = 6;
    scanf("%d%d",&tedad,&sum);
    printf("%d",tuss(tedad,k,sum));

    return 0;
}