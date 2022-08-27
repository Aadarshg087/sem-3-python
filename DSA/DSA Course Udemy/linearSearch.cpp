#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 76, 23, 5, 64, 6, 1, 3, 44, 56, 82, 45, 23};
    int n = sizeof(arr) / sizeof(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    int key;
    cout << "Enter a number: ";
    cin >> key;

    int index = linearSearch(arr, n, key);
    if (index == -1)
    {
        cout << "Element not found" << endl;
    }
    else
        cout << "Element found at the index: " << index;

    return 0;
}