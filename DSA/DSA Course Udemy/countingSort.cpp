#include <iostream>
#include <vector>
using namespace std;

void countingSort(int arr[], int n)
{
    // finding the largest element
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // creating the array of length equals to the largest element
    vector<int> freq(largest + 1, 0);

    // updating the frequency array
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // putting back the number in original array in a sorted way

    // j is used to iterate over the original array
    int j = 0;
    for (int i = 0; i < largest; i++)
    {
        while (freq[i] > 0)
        {
            // putting the element in the original array
            arr[j] = i;

            // reducing its frequency as it is inseted one time in the original array
            freq[i]--;

            // moving to the next position of the array to print the element
            j++;
        }
    }

    // printing the updated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 2, 4, 6, 7, 9, 7, 8, 2, 7};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr, n);

    return 0;
}