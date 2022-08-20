
#include <bits/stdc++.h>
using namespace std;
#define A 10

int** kahad(int** mat, int x, int k, int n)
{
    int** moteghayyer;
    int i = 0, j = 0;
    moteghayyer=new int*[n-1];
    for (int l = 0; l <n-1 ; ++l) {
        moteghayyer[l]=new int[n-1];
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != x && col != k)
            {
                moteghayyer[i][j++] = mat[row][col];

                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
    return moteghayyer;
}

int determinnae_matris(int** matris, int n)
{
    int natije = 0;

    if (n == 1)
        return matris[0][0];

    int** moteghayyer;

    int sign = 1;


    for (int f = 0; f < n; f++)
    {

        moteghayyer=kahad(matris, 0, f, n);
         natije+=sign *matris[0][f]*determinnae_matris(moteghayyer, n - 1);
        for (int i = 0; i <n-1 ; ++i) {
            delete[] moteghayyer[i];

        }
        delete[] moteghayyer;
        sign = -sign;
    }

    return natije;
}

int main()
{
    int n;
    cin>>n;
    int** a;
    a=new int*[n];
    for (int k = 0; k <n ; ++k) {
        a[k]=new int[n];
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            cin>>a[i][j];

        }

    }
    cout<<determinnae_matris(a, n);
    for (int l = 0; l <n ; ++l) {
        delete[] a[l];
    }
    delete [] a;

    return 0;
}
