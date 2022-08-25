// Insertion in array
#include <iostream>
using namespace std;

int average(int num1, int num2)
{
    int avg = (num1 + num2) / 2;
    return avg;
}

int insertElement(int arr[], int n, int avg, int position)
{
    n++;
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = avg;
    return arr;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // taking input as array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    // printing the default array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        // checking whether the 2 consecutive no. are odd or not
        if (arr[i] / 2 != 0 && arr[i + 1] / 2 != 0)
        {
            // finding the average
            int avg = average(arr[i], arr[i + 1]);
            int position = i + 1;

            // inserting the element
            insertElement(arr, n, avg, position);
        }
    }
    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}