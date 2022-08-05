#include <stdio.h>
int hazine(){
    int city,buck,benzin=0,pool=0,i=1,j=2;
    scanf("%d%d",&city,&buck);
    if(buck>=city)
    pool+=(city-1);
    else
        pool+=buck;
    benzin+=pool;
    while(i<=city) {
        i++;
        benzin--;
        if (i%3 == 0){
            pool++;
        }
        if(i==city)
            break;
        if ((city - j) > benzin && i!=city){
            pool +=i;
            benzin++;
        }

        j++;
    }
    return pool;
}

int main() {
    printf("%d",hazine());
    return 0;
}