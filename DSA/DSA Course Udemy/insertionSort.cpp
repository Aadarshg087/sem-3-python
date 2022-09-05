#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // element that needs to be placed in the right position
        int current = arr[i];

        // comparing to element previos to the main element
        int prev = i - 1;

        // checking the condition whether to switch the position or not
        while (prev >= 0 && arr[prev] > current)
        {
            // shifting the previous element to the next position
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }

        // now the prev containing the value where it fails the condition
        // So, we need to place the main element to the next position to it.
        // Since, current is greater than the previous element
        arr[prev + 1] = current;
    }

    // printing the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    // printing the unsoreted array
    cout << "Unsorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    insertionSort(arr, n);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}