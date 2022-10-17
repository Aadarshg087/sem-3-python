#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int low, high;
    cin >> low;
    cin >> high;
    int check;
    if (low < 0 || high > 100)
    {
        cout << "Invalid Input" << endl;
        exit(EXIT_SUCCESS);
    }

    int arr[high + 1] = {0};
    for (int i = low; i < high + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = low; i < high + 1; i++)
    {
        int t;
        cout << "This is called" << endl;
        cin >> t;
        arr[t] = 1;
    }

    // printing the array
    for (int i = low; i < high + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // for (int i = low; i < high + 1; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         cout << i << " ";
    //         check = 0;
    //     }
    // }

    // if (check == 1)
    // {
    //     cout << "No Number Missed" << endl;
    // }

    return 0;
}