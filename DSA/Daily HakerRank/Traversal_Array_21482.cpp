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
    for (int i = 0; i < n; i++)
    {
        int k = 7;
        int arr[7];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum = sum + arr[j];
        }
        if (sum >= 56)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}
