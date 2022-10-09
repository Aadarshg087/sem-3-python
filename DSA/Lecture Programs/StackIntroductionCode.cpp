#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    // Data members needed in the stack
    int *arr;
    int size;
    int top;

    // Constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Push Operation
    void push(int element)
    {
        // Checking the space availability
        if (size - top >= 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop Operation
    void pop()
    {
        // Checking whether the element is present or not
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    // Peeking the stack from the top
    int peek()
    {
        // Checking the top most element
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    // Checking if the stack is empty or not
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    Stack st(5);
    st.push(43);
    st.push(54);
    st.push(87);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    st.pop();
    cout << st.peek() << endl;

    // Stack implemenation using Classes

    /*
    // Stack implementation using STL
    stack<int> s;
    s.push(34);
    s.push(354);
    s.push(65);

    cout<<"Top view: "<<s.top()<<endl;

    cout<<"Popping an element"<<endl;
    s.pop();
    cout<<"Top view: "<<s.top()<<endl;

    cout<<"Popping an element"<<endl;
    s.pop();
    cout<<"Top view: "<<s.top()<<endl;
    cout<<"Is stack empty: "<<s.empty()<<endl;

    cout<<"Popping an element"<<endl;
    s.pop();
    cout<<"Is stack empty: "<<s.empty()<<endl;
    */

    return 0;
}