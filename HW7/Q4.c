#include <stdio.h>
int MDB(int n){ //ekhtesassi erfan rafiee
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else if (n%2==0) //function e tolid e adad n e donbale
        return MDB(n/2)*4;
    else if(n%2==1)  //function e tolid e adad n e donbale
        return MDB(n/2)*4 + 1;
}
void donbale_tavan_4(int n){  //print e donbale
    for (int i = 0; i <n ; ++i) {
        printf("%d",MDB(i));
        if(i<n-1){
            printf(" ");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    donbale_tavan_4(n);
    return 0;
}