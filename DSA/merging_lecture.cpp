#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n1 = sizeof(arr1) / sizeof(int);

    int arr2[] = {9, 10, 11, 12, 13, 14};
    int n2 = sizeof(arr2) / sizeof(int);

    int arr3[14];
    int n3 = sizeof(arr3) / sizeof(int);

    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < n2; j++)
    {
        cout << arr2[j] << " ";
    }
    cout << endl;

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[i])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    if (i == n1)
    {
        while (j < n2)
        {
            arr3[k] = arr2[j];
            i++;
            k++;
        }
        while (i < n1)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }
    cout << endl;
    for (int i = 0; i < n3; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}