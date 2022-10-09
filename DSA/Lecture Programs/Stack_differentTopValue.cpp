#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = 0;
    }

    void push(int element)
    {
        if (top < size)
        {
            arr[top] = element;
            top++;
        }
        else
            cout << "Stack Overflow" << endl;
    }

    void pop()
    {
        if (top > 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Un=derflow" << endl;
        }
    }

    void peek()
    {
        if (top > 0 && top <= size)
        {
            cout << arr[top - 1] << endl;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    void isEmpty()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack is not empty" << endl;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(43);
    st.push(54);
    st.push(87);
    st.push(94);
    st.push(54);

    st.peek();

    st.isEmpty();

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    st.peek();

    st.pop();

    st.peek();
    return 0;
}