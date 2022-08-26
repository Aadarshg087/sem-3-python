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
    if (n < 0 || n > 20)
    {
        cout << "Invalid array size" << endl;
    }
    else
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            return 0;
        }
    }
    return 0;
}
