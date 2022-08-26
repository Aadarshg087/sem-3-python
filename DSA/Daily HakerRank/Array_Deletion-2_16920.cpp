#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void deleteElement(int arr[], int n, int del)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == del)
        {
            n = n - 1;
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Default array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int count;
    for (int i = 0; i < n - 3; i++)
    {

        if ((arr[i]) / 2 != 0 && (arr[i + 1]) / 2 != 0 && (arr[i + 2]) / 2 != 0)
        {
            int del = arr[i];
            deleteElement(arr, n, del);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
