#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void deleteElement(int arr[], int n, int element, int position)
{

    if (position < n)
    {
        arr[position] = 0;
        for (int j = position; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
}

int main()
{
    int n;
    cin >> n;

    // checking the value of n
    if (n < 2 || n > 30)
    {
        cout << "Invalid Input" << endl;
        exit(EXIT_SUCCESS);
    }
    // taking input as array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // deleting the repeating element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int element = arr[i + 1];
            int position = i + 1;
            n = n - 1;
            deleteElement(arr, n, element, position);
        }
    }

    // printing the updated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
