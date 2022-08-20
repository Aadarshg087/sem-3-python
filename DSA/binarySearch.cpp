#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
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
    int arr[] = {2, 5, 7, 11, 17, 20, 21, 30, 37, 41, 56};
    int n = sizeof(arr) / sizeof(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    int key;
    cout << "Enter a number: ";
    cin >> key;

    int index = binarySearch(arr, n, key);
    if (index == -1)
    {
        cout << "Element not found!" << endl;
    }
    else
        cout << "Element found at index: " << index << endl;

    return 0;
}