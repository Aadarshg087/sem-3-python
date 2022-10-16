#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
};

void push(int element, int top, int size)
{
    if (size - top > 1)
    {
        
    }
}

void pop()
{
}

void display()
{
}

int main()
{
    int n;
    cin >> n;
    Stack s1(n);
    int num;
    int element;
    cin >> num;
    if (num == 1)
    {
        cin >> element;
        push(element, );
    }
    else if (num == 2)
    {
        pop();
    }
    else if (num == 3)
    {
        display();
    }

    return 0;
}
