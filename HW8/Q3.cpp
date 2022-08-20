#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;
int Merge(int A[],int p, int q,int r)
{

    int n1,n2,i,j,k;

    n1=q-p+1;
    n2=r-q;
    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i]=A[p+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j]=A[q+j+1];
    }
    i=0,j=0;

    for(k=p;i<n1&&j<n2;k++)
    {
        if(L[i]<R[j])
        {
            A[k]=L[i++];
        }
        else
        {
            A[k]=R[j++];
        }
    }

    while(i<n1)
    {
        A[k++]=L[i++];
    }

    while(j<n2)
    {
        A[k++]=R[j++];
    }
}

int MergeSort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int main()
{
int n,r;
cin>>n>>r;
int arr[10000];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];

    }
int x=arr[0];
  MergeSort(arr,0,n-1);
  int z=binarySearch(arr,0,n-1,x);
  int terekide=1;
    for ( int j=z ; j <(n-1) && (arr[j]+r>=arr[j+1]) ; ++j) {
        terekide++;
    }
    for (int j=z; j>0 && arr[j]-r<=arr[j-1] ; --j) {
        terekide++;
    }
   cout<<terekide<<endl;
    return 0;
}