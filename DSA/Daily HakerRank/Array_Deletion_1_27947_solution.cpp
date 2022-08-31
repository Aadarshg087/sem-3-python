#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void delete_array(int arr[], int pos, int n)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int n;
    cin >> n;
    if (n > 2 && n < 30)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                delete_array(arr, i, n);
                n = n - 1;
                i = i - 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}