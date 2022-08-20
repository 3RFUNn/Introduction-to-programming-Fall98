#include <cstdio>
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
        if (L[i] >= R[j])
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
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr_size;
    scanf("%d",&arr_size);
    int arr[arr_size];
    for (int i = 0; i <arr_size ; ++i) {
        scanf("%d",&arr[i]);

    }

    MERGE_SORT(arr, 0, arr_size - 1);
    int k=0;

    for (int l = 0; l <arr_size ; ++l) {


        for (int j = 1,h=0; h < arr[k]; ++j,h++) {
            arr[j]--;
            if(arr[j]<0)
                return printf("YES");
        }
        k++;
    }
    printf("NO");
    return 0;
}
