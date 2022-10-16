// 1 test case is wrong out fo 5
// Need to review

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is full" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is emtpy" << endl;
        }
    }

    void middleElement()
    {
        int count = 0;
        for (int i = 0; i <= top; i++)
        {
            count++;
        }
        if (count % 2 == 0)
        {
            cout << arr[(count / 2) - 1] << endl;
        }
        else
        {
            int oddIndex = (count / 2);
            cout << arr[oddIndex] << endl;
        }
    }
};

int main()
{
    int n, element;
    cin >> n;
    Stack s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        s.push(element);
    }

    int count = n;
    while (count > 3)
    {
        s.middleElement();
        s.pop();
        count--;
    }

    if (n == 3)
    {
        int count = n;
        while (count > 1 && count <= 3)
        {
            s.middleElement();
            s.pop();
            count--;
        }
    }
    return 0;
}
