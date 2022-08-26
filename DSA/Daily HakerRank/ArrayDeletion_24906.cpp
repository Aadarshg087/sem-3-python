#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void deleteElement(char arr[], int del, int n)
{
}

int main()
{
    char arr[7] = {'V', 'I', 'B', 'G', 'Y', 'O', 'R'};
    int n = 7;
    char del;
    cin >> del;
    int i;
    int check;

    // Checking the element
    for (i = 0; i < n; i++)
    {
        check = 1;
        if (arr[i] == del)
        {
            break;
        }
        else
        {
            // if element is not present
            check = 0;
        }
    }

    // if element is not present in the whole array
    if (check == 0)
    {
        cout << "Color not available " << endl;
    }

    // if element present in the whole array
    else
    {
        // Deleting the element
        if (i < n)
        {
            n = n - 1;
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
        // printing the updated array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
    return 0;
}
