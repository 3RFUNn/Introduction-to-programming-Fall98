#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

void MERGE(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MERGE_SORT(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        MERGE_SORT(arr, l, m);
        MERGE_SORT(arr, m+1, r);

        MERGE(arr, l, m, r);
    }
}
double median(int arr[],int n){
    double miyane;
    if(n%2==0){
        miyane=(arr[(n-1)/2]+arr[(n-1)/2+1])/2.0;
    }
    if(n%2==1){
        miyane=arr[n/2];
    }
    return miyane;
}
double mean(int arr[],int n){
    double sum=0;
    for (int i = 0; i <n ; ++i) {
        sum+=arr[i];
    }
    return (sum/n);

}
double varience(int arr[],int n,double avg){
    double varians=0;
    for (int i = 0; i <n ; ++i) {
        varians+=(pow((avg-arr[i]),2));
    }
    return varians/n;
}
double cov(double var, double avg){
    return sqrt(var)/avg;
}
double answer(double x){
    int y=x*1000;
    return y;
}


int main() {
    int n;
    cin>>n;
    int araye[n];
    for (int i = 0; i <n ; ++i) {
        cin>>araye[i];
    }
    MERGE_SORT(araye,0,n-1);
    printf("%.3lf\n",median(araye,n));
    double average=mean(araye,n);
    double varians=varience(araye,n,average);
    double c=cov(varians,average);
    printf("%.3lf",answer(c)/1000);

    return 0;
}
