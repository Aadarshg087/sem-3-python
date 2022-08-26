#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100];
    int n = 10;
    int location = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element;
    cin >> element;
    int found;
    int ans = -1;

    // insert the elements
    for (int i = 0; i < n; i++)
    {
        found = 0;
        // condition
        if (arr[i] == element)
        {
            cout << location;
            found = 1;
            break;
        }
        else
        {
            location = location + 1;
        }
    }

    if (found == 0)
    {
        cout << ans;
    }

    return 0;
}
