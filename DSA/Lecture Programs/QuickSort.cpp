#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int p, int q, int r);

void mergeSort(int arr[], int p, int r)
{
    int q;
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
    }
    merge(arr, p, q, r);
}

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    // int *L = new int[n1];
    // int *R = new int[n2];

    int L[n1], R[n2];

    for (int i = p; i < n1; i++)
    {
        L[i] = arr[p + i - 1];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[q + i];
    }
    int j = 0, k = 0, m = p;
    while (j < n1 && k < n2)
    {
        if (L[j] <= R[k])
        {
            arr[m] = L[j];
            j++;
        }
        else
        {
            arr[m] = R[k];
            k++;
        }
        m++;
    }
    while (m < r)
    {
        if (j < n1)
        {
            arr[m] = L[j];
            m++;
            j++;
        }
        else
        {
            arr[m] = R[k];
            k++;
            m++;
        }
    }
    delete L;
    delete R;
}

int main()
{
    int arr[] = {2, 7, 4, 3, 8, 9};
    mergeSort(arr, 0, 5);
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}