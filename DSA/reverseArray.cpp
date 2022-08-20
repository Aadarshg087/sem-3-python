#include <iostream>
using namespace std;

// Reversing the array function
void reverseArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s = s + 1;
        e = e - 1;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main()
{
    int arr[] = {3, 6, 2, 6, 3, 21, 5, 26, 7, 42, 25, 7};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    // Calling the function to reverse the array
    reverseArray(arr, n);

    // Printing the reversed array
    printArray(arr, n);
    return 0;
}