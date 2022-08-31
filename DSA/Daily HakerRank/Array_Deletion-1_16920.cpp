#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int deleteElement(int arr[], int n, int element)
{
    int position;
    int found = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            position = i;
            break;
        }
        else
            found = 0;
    }
    if (found == 0)
    {
        return n;
    }

    if (position < n)
    {
        n = n - 1;
        for (int j = position; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int element;
    cin >> element;

    n = deleteElement(arr, n, element);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
