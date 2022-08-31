#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, size, elem, num, loc;
    cin >> size;
    cin >> elem;
    int arr[size];
    for (i = 0; i < elem; i++)
    {
        cin >> arr[i];
    }
    for (i = elem; i < size; i++)
    {
        arr[i] = 0;
    }
    cin >> num;
    if (num < size)
    {
        loc = size % arr[2];
    }
    else
    {
        loc = num % size;
    }
    for (i = elem - 1; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = num;
    elem++;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}