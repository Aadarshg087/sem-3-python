#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int element;
    cin >> element;

    int update = 0;

    for (int i = 0; i < n; i++)
    {
        if (element > arr[i] && element < arr[i + 1])
        {
            int j;
            n = n + 1;
            for (j = n; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = element;
            update = 1;
            break;
        }
    }

    if (update == 0)
    {
        n = n + 1;
        for (int j = n; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = element;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
