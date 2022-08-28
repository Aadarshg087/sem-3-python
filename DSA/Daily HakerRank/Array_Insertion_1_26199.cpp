#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertElement(int arr[], int n, int position, int element)
{
    int i;
    n = n + 1;
    for (i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << ",";
        }
    }
}

int main()
{
    int n = 7;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int position;
    cin >> position;

    int element;
    cin >> element;

    // Checking the given position is valid or not
    if (position < 0)
    {
        cout << "Invalid Position" << endl;
        exit(EXIT_SUCCESS);
    }

    insertElement(arr, n, position, element);

    return 0;
}
