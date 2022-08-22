#include <iostream>
using namespace std;

int maxSum(int sum)
{
}

void sum_subArrays(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << " ";
                sum = sum + arr[k];
                // int maxsum = maxSum(sum);
            }
            cout << endl;
            cout << "Sum is: " << sum;
            sum = 0;
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
        cout << arr[i] << " ";
    }
    cout << endl;

    sum_subArrays(arr, n);
    return 0;
}