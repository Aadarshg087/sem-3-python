#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int position = 0; position < n - 1; position++)
    {
        int current = arr[position];
        int min_position = position;
        for (int j = position; j < n; j++)
        {
            if (arr[j] < arr[min_position])
            {
                min_position = j;
            }
        }
        swap(arr[position], arr[min_position]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    return 0;
}