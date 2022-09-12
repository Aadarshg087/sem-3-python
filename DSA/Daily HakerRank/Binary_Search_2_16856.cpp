#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int n = 10;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // element that we have to find in the array
    int target;
    cin >> target;

    // storing the index of the found value
    int index = binarySearch(arr, n, target);

    // printing the index
    cout << index;
    return 0;
}
