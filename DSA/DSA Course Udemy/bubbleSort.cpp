#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // picking the element
    for (int i = 0; i < n; i++)
    {
        // traversing it through the array
        for (int j = 0; j < n - i - 1; j++)
        {
            // comparing it with the next element
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[8] = {2, 3, 1, 4, 56, 32, 21, 31};
    int n = 8;

    // priting the default array
    cout << "Default array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Sorting the array
    bubbleSort(arr, n);

    // printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}