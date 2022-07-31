#include <stdio.h>

int main() {
    int a,b,c,d,e;
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e );
  a=b-a;
  b=c-b;
  c=d-c;
  d=e-d;
  a=b-a;
  b=c-b;
  c=d-c;
  a=b-a;
  b=c-b;
  a=b-a;
  printf("%d",a);

    return 0;
}