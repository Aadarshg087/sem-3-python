#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
/* Insertion in Array */

int main()
{

    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "Invalid Input";
        return 0;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {

        if (i < n - 1 && a[i] % 2 && a[i + 1] % 2)
        {
            int x = (a[i] + a[i + 1]) / 2;
            ans.push_back(a[i]);
            ans.push_back(x);
        }
        else
        {
            ans.push_back(a[i]);
        }
    }
    int size = ans.size();
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}