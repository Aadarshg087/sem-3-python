#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void maximumValue(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << max << endl;
}

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maximumValue(arr, n);
    return 0;
}
