#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxElement(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minElement(int arr[], int n)
{
    int min = arr[5];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void update(int arr[], int n, int max, int min)
{
    int locationMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            locationMax = i;
            break;
        }
    }
    arr[locationMax] = min;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8];
    int n = 8;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = maxElement(arr, n);
    int min = minElement(arr, n);
    update(arr, n, max, min);
    return 0;
}
