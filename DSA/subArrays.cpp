#include <iostream>
using namespace std;

void subArrays(int arr[], int n)
{
    // i loop will picking the main element to form the seb arrays of it
    for (int i = 0; i < n; i++)
    {
        // j loop is picking the start and the end point of sub arrays
        for (int j = i; j < n; j++)
        {
            // k loop is printing the from i to j
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    subArrays(arr, n);

    return 0;
}