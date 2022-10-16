#include <iostream>
using namespace std;

class Stack1
{
public:
    int top;
    int size;
    string *arr;

    Stack1(int size)
    {
        this->size = size;
        arr = new string[size];
        top = -1;
    }

    void push1(string s)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = s;
        }
        else
        {
            cout << "Full Box" << endl;
        }
    }

    void pop1()
    {
        if (top >= 0 && top < size)
        {
            if (top == 0)
            {
                cout << arr[top];
            }
            else
            {
                cout << arr[top] << "->";
            }
            top--;
        }
        else
        {
            cout << "Empty Box" << endl;
        }
    }
};

int main()
{
    int n;
    string s, t;
    cin >> n;
    if (n <= 0)
    {
        cout << "Empty Box" << endl;
    }
    else if (n > 6)
    {
        cout << "Full Box" << endl;
    }
    else
    {
        Stack1 s1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            s1.push1(s);
        }
        for (int i = 0; i < n; i++)
        {
            s1.pop1();
        }
    }

    return 0;
}